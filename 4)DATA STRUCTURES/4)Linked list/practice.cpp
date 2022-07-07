#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;

};

void insertAtbeg(int val,Node*&  node1){
     node1->data=val;
     node1->next=NULL;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
Node* node1=new Node;
Node* head=node1;
insertAtbeg(5,node1);
print(head);
insertAtbeg(10,node1);
print(head);


}