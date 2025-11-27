#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(5);
    int target=15;
    // s.find()-> it searches in the sets, and if it not found then it returns last element
    if(s.find(target)!=s.end()){
        cout<<target<<" is  present"<<endl;
    }else{
        cout<<target<<" is not present"<<endl;
    }
    // s.erase()-> it removes the element from the sets
    s.erase(15);    // 15 is removed from the sets
    // s.count()-> it counts the number of elements in the sets
    cout<<s.count(15)<<endl;    // 0
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
}