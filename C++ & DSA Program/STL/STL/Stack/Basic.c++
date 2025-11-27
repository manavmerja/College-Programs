#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;

 //   cout<<st.size()<<endl; // 0


    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.size()<<endl; // 3
    // cout<<st.top()<<endl; // 30
    // st.pop(); // 30 is removed
    // st.top(); // 20
    // cout<<st.top()<<endl; // 20
    // cout<<st.size()<<endl; // 2

    // print in reverse order 
    // while (st.size() > 0)
    // {
    //     cout<<st.top()<<endl; 
    //     st.pop();
    // }
    

    // we will use extra stack
    stack<int> temp;
    while(st.size() > 0)
    {
      cout<<st.top()<<" ";
      temp.push(st.top());
      st.pop();
    }


    // putting elements back in original stack
    while(temp.size() > 0)
    {
      st.push(temp.top());
      temp.pop();
    }
    cout<<endl;
}