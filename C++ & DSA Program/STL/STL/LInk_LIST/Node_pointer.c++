#include<iostream>

// temp-> val;
// (*temp).val

// AA Banne aekj che 
using namespace std;
class Node{
    public:
    int val;
    Node* Next;
    Node(int val){
        this->val=val;
        this->Next = NULL;
    }
};

int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);

    a->Next = b;
    b->Next = c;
    c->Next = d;

    cout<<a->Next->Next->Next->val<<endl;
    
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->Next;
    }
}