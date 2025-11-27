#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["camera"]=100;
    m["laptop"]=200;
    m["mobile"]=300;
    m["tablet"]=400;
    m["ipad"]=500;
    m.insert({"watch",600});
   // m.erase("tablet");

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    if(m.find("camera") !=m.end()){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    return 0;
}