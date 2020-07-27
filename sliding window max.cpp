#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int arr[100000];
    int k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    deque<int> q(k);
    
    //process first k element seperately
    for(int i = 0;i<k;i++){
        if(!q.empty() && arr[i]>arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    //process the remaining elements
    int i;
    for(;i<n;i++){
        cout<< arr[q.front()]<<" ";

        // 1 Remove the elements which are not the part of window(Contraction)
        while((!q.empty()) && (q.front()<=i-k)){
            q.pop_front();
        }

        // 2 Remove the elements which are not useful and still in the window
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
        }
        // 3 Add the new elemnts(Expansion)
        q.push_back(i);
    }
}
