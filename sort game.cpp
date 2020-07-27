#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int num;
    Person(){}
    Person(string s,int number){
        name = s;
        num = number;
    }
};
class personCompare{
    public:
     bool operator()(Person a,Person b){
         if(a.num == b.num){
             return a.name > b.name;
         }
         return a.num<b.num;
     }
};
int main() {
    int k;
    cin>>k;
    int n;
    cin>>n;
    priority_queue<Person,vector<Person>,personCompare> pq; //function calling inside a function
    for(int i=0;i<n;i++){
        string name;
        int num;
        cin>>name>>num;
        Person p(name,num);
        pq.push(p);
    }
    for(int i = 0;i<n;i++){
        Person p =  pq.top();
        if(p.num >= k){
            cout<<p.name<<" "<<p.num<<endl;
        }
        pq.pop();
        
    }

}