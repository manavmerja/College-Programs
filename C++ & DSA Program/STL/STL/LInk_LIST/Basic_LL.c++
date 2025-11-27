#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    // 10 20 30 40

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // formaing the link list
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // printing the link list
   //  Node* ptr = &b;
   //  ptr->val = 100; // changing the value of the node
    //  cout<<b.val<<endl; // 100
    cout<<(a.next)->val; // 20
    cout<<endl;
    cout<<(b.next)->val; // 30
    cout<<endl;

    // print a to c value
    cout<<((a.next)->next)->val; // 30
    cout<<endl;

    // print a to d value
    cout<<((a.next)->next)->next->val; // 40
    cout<<endl;


    Node temp =a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}