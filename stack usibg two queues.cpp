#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class stackUsingQueue{
    queue<int> *q1, *q2;
    public:
    stackUsingQueue(){
        q1 = new queue<int>();
        q2 = new queue<int>();
    }
    void push(int x){
        q1->push(x);
        }
    void pop(){
        int n =  q1->size();
        for(int i=0;i<n-1;i++){
            q2->push(q1->front());
            q1->pop();
        }
        if(!q1->empty()){
            q1->pop();
            swap(q1,q2); //maintain defination that q2 is always empty
        }

    }
    int top(){
        int n =  q1->size();
        for(int i=0;i<n-1;i++){
            q2->push(q1->front());
            q1->pop();
        }
        int topElemet = q1->front();
        if(!q1->empty()){
            q2->push(q1->front());
            q1->pop();
            swap(q1,q2); //maintain defination that q2 is always empty
        }
        return topElemet;
         
    }
    ~stackUsingQueue(){
        delete q1;
        delete q2;
    }
};
int main() {
    stackUsingQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout <<s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    return 0;
}
