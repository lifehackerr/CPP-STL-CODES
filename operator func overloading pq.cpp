#include <iostream>
using namespace std;
class Fun{
    public:
    void operator()(string str){
        cout<<"having fun with "<<str;
    }
};
int main() {
    Fun f;
    f("cpp");
}
