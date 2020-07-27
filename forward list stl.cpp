#include <bits/stdc++.h>
using namespace std;
void printList(forward_list<int> list){
    for(int i :list){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    forward_list<int> f1;
    forward_list<int> f2({1,2,3,4});
    forward_list<int> f3(4,0);
    f1.assign({10,20,30});
    printList(f1);    
    printList(f2);
    printList(f3);
    f1.push_front(40);
    printList(f1);    
    f1.emplace_front(50);
    printList(f1);    
    f1.pop_front();
    printList(f1);
    auto it =  f1.insert_after(f1.begin(),{1,2,3});
    printList(f1);    
    f1.remove(2);
    printList(f1);  
    f1.splice_after(f1.begin(),f2);
    printList(f1);    
    f1.front();
    printList(f1);    
    int c = f1.max_size();
    cout<<c<<endl;  
    f1.merge(f2);
    printList(f1);    
    f1.sort();
    printList(f1);   
    f1.unique();
    printList(f1); 
    f1.reverse();
    printList(f1);    
    f1.swap(f2);
    printList(f1);    
    if(f1.empty()){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty";
    }
    f2.clear();
    printList(f1);  
    if(f1.empty()){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"list is not empty";
    }  










    



}
