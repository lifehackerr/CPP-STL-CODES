#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        pq.push(no);
    }
    cout<<"size:"<<pq.size()<<endl;
    cout<<"top:"<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    //min heap
    priority_queue<int , vector<int>, greater<int>> pq1;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int no1;
        cin>>no1;
        pq1.push(no1);
    }
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}
