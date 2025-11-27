#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="abc";
    p1.second=1;

    pair<string,int> p2;
    p2.first="def";
    p2.second=2;

    pair<string,int> p3;
    p3.first="ghi";
    p3.second=3;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    for(pair<string,int> p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}