#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
    vector<char> vec={'a','b','c','d','e'};
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.push_back('f');
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.pop_back();
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
     vec.front();
   cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.back();
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.insert(vec.begin()+2,'z');
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.erase(vec.begin()+2);
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.resize(3);
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.resize(5);
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    vec.at(2);
    cout<<"size of vector: "<<vec.size()<<endl;
    for(char i:vec){
        cout<<i<<endl;
    }
    return 0;
}