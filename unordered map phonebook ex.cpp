#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string,vector<string>> phonbook;
    phonbook["rahul"].push_back("9870");
    phonbook["rahul"].push_back("9871");
    phonbook["rahul"].push_back("9872");
    phonbook["rahul"].push_back("9873");
    phonbook["kajal"].push_back("8760");
    phonbook["kajal"].push_back("8761");
    phonbook["kajal"].push_back("8762");
    for(auto p:phonbook){
        cout<<"name"<<p.first<<" -> ";
        for(auto s: p.second){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    string name;
    cin>>name;
    if(phonbook.count(name)==0){
        cout<<"absent";
    }
    else{
        for(auto s: phonbook[name]){
            cout<<s;
        }


    }

    

}
