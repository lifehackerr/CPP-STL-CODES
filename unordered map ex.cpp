#include <bits/stdc++.h>
using namespace std;

class Student{
    public:

    string firstname;
    string lastname;
    int rollno;

    Student(string f,string l,int no){
        firstname = f;
        lastname  = l;
        rollno = no;
    }
    bool operator==(const Student &s) const {
        return rollno = s.rollno ? true:false;
    }
};
class hashFn{
    public:
    size_t operator()(const Student &s)const{
        return s.firstname.length()+ s.lastname.length();
    }
};
int main() {
    unordered_map<Student,int,hashFn> Student_map;
    Student s1("Prateek","Narang",23);
    Student s2("Rahul","Kumar",35);
    Student s3("Prateek","Gupta",42);
    Student s4("Rahul","Kumar",21);

    //add students and there marks into hashmap
    Student_map[s1] =  100;
    Student_map[s2] =  10;
    Student_map[s3] =  1000;
    Student_map[s4] =  10000;
    for(auto s:Student_map){
        cout<<s.first.firstname<<" "<<s.first.rollno<<" marks "<<s.second<<endl;
    }



    return 0;
}
