#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> m;
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
   m.emplace("tv",100);
    m.emplace("tv",100);

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}