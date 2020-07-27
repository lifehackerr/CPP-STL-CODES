#include <bits/stdc++.h>
using namespace std;
bool comp(string a,string b){
    if(a.length()== b.length()){
        return a>b;
    }
    return a.length()>b.length();
}
int main() {
    //string int
    string s0;
    string s1("hello world1");
    string s2 = " hello world2";
    string s3(s2);
    string s4 = s2;
    char arr[100]  = {'a','b','\0'};
    string s5(arr);
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    if(s0.empty()){ //empty is a boolean function returns true and false
        cout<<"empty string";
    }
    else{
        cout<<"non empty string";
    }
    cout<<endl;
    //append operations
    s0.append("i love programming");
    cout<<s0<<endl;
    s0 = s0 + " cpp/python";
    cout<<s0<<endl;
    s0 =  s0 + s1;
    cout<<s0<<endl;
    // delete/erase the content of a string
    cout<<s0.length()<<endl;
    s0.erase();
    cout<<s0.length()<<endl;
    //compare two strings
    s0 = "apple";
    s1 =  "mango";
    cout<< s0.compare(s1)<<endl; // ==1 if equal or <0 or >0 due to lexographic conversion

    //overloaded operator
    if(s1>s0){
        cout<<"mango is laxo greater than apple"<<endl;
    }
    cout<<s0[3]<<endl;
    string s = "i want to have apple juice";
    int idx =  s.find("apple");
    cout<<idx<<endl;
    string word =  "apple";
    int len =  word.length();
    cout <<s<<endl;
    s.erase(idx, len+1);
    cout <<s<<endl;
    //iterate over all char in a string
    for(int i = 0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;
    //using iteratorss
    for(auto it = s1.begin();it<s1.end();it++){
        cout<<(*it)<<"-";
    }
    cout<<endl;

    int n;
    cin>>n;
    cin.get();
    string str[100];
    for(int i = 0;i<n;i++){
        getline(cin,str[i]);
    }
    sort(str,str+n,comp);
    for(int i = 0;i<n;i++){
        cout<<str[i]<<endl;
    }
    char s11[100] = "Today is a Rainy day.lets enjoy. ";
    char *ptr = strtok(s11,".");
    cout<<ptr<<endl;
    while(ptr != NULL){
        ptr = strtok(NULL,".");
        cout<<ptr<<endl;
    } 





    

}
