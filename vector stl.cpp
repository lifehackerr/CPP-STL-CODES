#include <bits/stdc++.h>
using namespace std;
void findnum(int arr[],int n,int target){
    bool hashh[100];
    for(int i=0;i<100;i++){
        hashh[i] = 0;
    }
    for(int i=0;i<n;i++){
        int temp = target - arr[i];
        if(temp>=0 && hashh[temp]==1){
            cout<<"element found";
        }
        else{
            hashh[temp]=1;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    findnum(arr,n,target);
}
