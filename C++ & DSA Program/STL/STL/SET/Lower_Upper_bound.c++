#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<<"lower_bound: "<<*(s.lower_bound(3))<<endl;
    cout<<"upper_bound: "<<*(s.upper_bound(3))<<endl;
    cout<<s.size()<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}