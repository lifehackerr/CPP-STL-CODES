#include <bits/stdc++.h>
using namespace std;
int main() {
    set<pair<int,int>> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no1,no2;
        cin>>no1>>no2;
        s.insert(make_pair(no1,no2));
    }
    int no3,no4;
    cin>>no3>>no4;
    auto it = s.find(make_pair(no3,no4));
    s.erase(it);
    for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it1 = s.lower_bound(make_pair(10,20));
    cout<<"lower bound: "<<it1->first<<" "<<it1->second<<endl;
}
