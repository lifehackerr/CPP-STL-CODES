#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> s;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int no;
        cin>>no;
        s.push(no);
    }
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
}
