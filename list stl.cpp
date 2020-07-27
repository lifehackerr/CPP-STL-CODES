#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> l1{1,2,3,4,5,6};
    list<string> l2{"apple","mango","gwava","papaya"};
    l2.push_back("kiwi");
    for(auto i :l2){
        cout<<i<<"";
    }
    cout<<endl;
    l2.push_front("grapes");
    for(auto it =  l2.begin();it != l2.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    cout<<l2.front()<<endl;
    cout<<l2.back()<<endl;
    l2.pop_front();
    l2.pop_back();
    for(auto i :l2){
        cout<<i<<" ";
    }
    cout<<endl;
    l2.sort();
    for(auto i :l2){
        cout<<i<<" ";
    }
    cout<<endl;
    l2.reverse();
    for(auto i :l2){
        cout<<i<<"-->";
    }
    cout<<endl;
    l2.push_back("kiwi");
    l2.push_back("banana");
    for(auto l: l2){
        cout<<l<<" ";
    }
    cout<<endl;
    string p;
    cin>>p;
    l2.remove(p);
    for(auto l: l2){
        cout<<l<<" ";
    }
    cout<<endl;
    auto it2 =  l2.begin();
    l2.erase(it2);
     for(auto l: l2){
        cout<<l<<" ";
    }
    cout<<endl;
    int n;
    cin>>n;
    list<int>l3;
    for(int i = 0;i<n;i++){
        int no;
        cin>>no;
        l3.push_back(no);
    }
    for(auto t:l3){
        cout<<t<<" ";
    }
    cout<<endl;

}
