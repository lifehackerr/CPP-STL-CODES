#include <bits/stdc++.h>
using namespace std;
class persons{
    public:
    string name;
    int age;
    persons(){

    }
    persons(string n,int a){
        name =  n;
        age =  a;
    }
};
class personCompare{
    public:
     bool operator()(persons a,persons b){
         if(a.age == b.age){
             return a.name > b.name;
         }
         return a.age>b.age;
     }
};

int main() {
    int n;
    cin>>n;
    priority_queue<persons,vector<persons>,personCompare> pq; //function calling inside a function
    for(int i=0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        persons p(name,age);
        pq.push(p);
    }
    int k;
    cin>>k;
    for(int i = 0;i<k;i++){
        persons p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
    return 0;
}
