#include <bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    int x,y;
    Car(){ }
    Car(string name,int x,int y){
        this->name =  name;
        this->x = x;
        this->y = y;
    }
    int dist(){
        return x*x +y*y;
    }
};
bool compare(pair<int,int>p1,pair<int,int>p2){
    int d1 =  p1.first*p1.first +p1.second*p1.second;
    int d2 =  p2.first*p2.first +p2.second*p2.second;
    if(d1 == d2){
        return p1.first <p2.first; 
    }
    return d1<d2;
}
bool compare1(Car A,Car B){
    int da = A.dist();
    int db = B.dist();
    if(da==db){
        return A.name.length() < B.name.length();
    }
    return da<db;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i= 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(auto i : v){
        cout<<"car "<<i.first <<" "<<i.second;
        cout<<endl;
    }
    int n1;
    cin>>n1;
    vector<Car> v1;
    for(int i= 0;i<n1;i++){
        string name;
        int x,y;
        cin>>name>>x>>y;
        Car temp(name,x,y); //object of car type
        v1.push_back(temp);
    }
    sort(v1.begin(),v1.end(),compare1);
    for(auto j : v1){
        cout<<"car "<<j.name <<", Distance "<<j.dist()<<", location: "<<j.x<<","<<j.y;
        cout<<endl; 
    }
    
}
