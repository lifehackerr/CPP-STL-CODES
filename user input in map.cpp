#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,int> m;
    // 1 insert
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string name;
        int price;
        cin>> name>>price;
        m.insert(pair<string,int>(name,price));
    }
    for(auto i:m){
        cout<<i.first<<" and "<<i.second;
    }
}
