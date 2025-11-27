#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m.emplace("tv",100);
    m.emplace("laptop",200);
    m.emplace("mobile",300);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}