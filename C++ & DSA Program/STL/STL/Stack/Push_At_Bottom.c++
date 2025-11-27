#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st) {
    stack<int> temp = st; // Create a temporary stack to hold the elements
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    // Print elements from the temporary stack
    while (!temp.empty()) {
        cout<<endl;
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    cout<<endl;

    
}