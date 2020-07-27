#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {2,5,2,5,7,4,2,7,6,9,0,1};
    int n =  sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i = 0;i<n;i++){
        s.insert(arr[i]);
    }
    s.erase(1);
    auto it = s.find(2);
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
}
