#include <bits/stdc++.h>
using namespace std;
int main() {
    multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char c;
        string s;
        cin>>c>>s;
        m.insert(make_pair(c,s));
    }
    auto it =  m.begin();
    it++;
    m.erase(it);
    for(auto i: m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    //find and remove c
    auto f = m.find('c');
    if(f->second == "cat"){
        m.erase(f);
    }

}
