#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(5);
    l.push_front(3);
    l.pop_back();
    l.pop_front();
    for(int val :l){
        cout<<val<<" ";
    }
    return 0;
}
//list is a doubly linked list
//List pan vector ni jem size,erase,clear,begin,end,rbegin,rend,insert,front,back aa badhu thay che