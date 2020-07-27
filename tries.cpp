#include <iostream>
using namespace std;
class triesNode{
    public:
    char data;
    triesNode **childrens;
    bool isTerminal;

    triesNode(int data){
        this-> data = data;
        childrens = new triesNode*[26];
        for(int i=0;i<26;i++){
            childrens[i] = NULL;
        }
        isTerminal = false;
    }
};
class tries{
    public:
    triesNode *root;
    tries(){
        root = new triesNode('\0');
    }
    bool search(triesNode *root,string word){
         if(word.size()==0){
           return root->isTerminal;
         }
            int index = word[0]-'a';
        triesNode *child;
        if(root->childrens[index] == NULL){
            child = root->childrens[index];
        }
        else{
            return false;
        }
        return search(child,word.substr(1));
    }
    bool search(string word){
        return search(root,word);
    }
    void insertWord(triesNode *root, string word){
        //base case
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }
        //small calculations
        int index = word[0]-'a';
        triesNode *child;
        if(root->childrens[index] == NULL){
            child = root->childrens[index];
        }
        else{
            child = new triesNode(word[0]);
            root->childrens[index] = child;
        }
        //recursive call
        insertWord(child,word.substr(1));
    }
      //for user
        void insertWord(string word){
            insertWord(root,word);
        }
    void removeWord(triesNode *root, string word){
        //base case
        if(word.size()==0){
            root->isTerminal = false;
            return;
        }
        //small calculations
        int index = word[0]-'a';
        triesNode *child;
        if(root->childrens[index] != NULL){
            child = root->childrens[index];
        }
        else{
            return;
        }
        //recursive call
        removeWord(child,word.substr(1));
        // remove child node if its useless
        if(child->isTerminal== false){
            for(int i=0;i<26;i++){
                if(child->childrens[i] != NULL){
                    return;
                }
            }
            delete child;
            root->childrens[index] = NULL;
        }
    }
    //for user
        void removeWord(string word){
            removeWord(root,word);
        }
};
    int main() {
    tries t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("dot");
    cout<<t.search("and")<<endl;
    t.removeWord("and");
    cout<<t.search("and")<<endl;
}
