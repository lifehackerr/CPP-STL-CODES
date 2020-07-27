#include <bits/stdc++.h>
using namespace std;
void query_print(priority_queue<int, vector<int> greater<int>> pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main() {
	int no;
    priority_queue<int, vector<int> greater<int>> pq;
    int cs = 0;
    int k;
    cin>>k;
	while(scanf("%d",&no)!= EOF){ //take input of infinite type stream
	    if(no == -1){
            query_print(pq);
        }
        else if(cs<k){
            pq.push(no);
            cs++;
        }
        else{
            if(no>pq.top()){
                pq.pop();
                pq.push(no);
            }
        }
        cout << no << " ";
	}
	return 0;
}
