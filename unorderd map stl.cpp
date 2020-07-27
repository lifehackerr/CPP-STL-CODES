#include <bits/stdc++.h>
using namespace std;
int main() {
    //map is an associative container that stores mapping between keys and value
    // maps maintian a self balancing BST to do the work
    // keys are ordered
    unordered_map<string,int> m;
    // 1 insert
    m.insert(make_pair("mango",50));
    pair<string,int> p;
    p.first = "apple";
    p.second = 100;
    m.insert(p);
    m["banana"] = 20; // if we reassign the previous key then the value of certain key got updated
    m["apple"] = 20;

    //2 search
    int n;
    cin>>n;
    while(n--){
    string fruit;
    cin>>fruit;
    m[fruit] += 20;
    auto it = m.find(fruit);
    if(it != m.end()){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<< fruit<<" is not found"<<endl;
    }
    }
    string fruit1;
    cin>> fruit1;
    if(m.count(fruit1)){ // count gives us 0 or 1 value,1 if present 0 otherwise
        cout<<"fruit is present"<<endl;
    }
    m["grapes"] =  23;
    m["gvava"] = 53;
    m["orange"] = 72; 
    for(auto it = m.begin();it!= m.end();it++){
        cout<<it->first<<" and price is "<<it->second;
        cout<<endl;
    }
    for(auto i:m){
        cout<<i.first<<" and price is "<<i.second;
        cout<<endl;

    }
    

    
}
