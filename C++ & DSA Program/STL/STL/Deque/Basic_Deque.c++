#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(3);
    dq.push_back(5);
    dq.push_front(6);
    dq.push_front(7);
    dq.pop_back();
    dq.pop_front();
    for(auto i: dq){
        cout<<i<<" ";
    }
    return 0;
}