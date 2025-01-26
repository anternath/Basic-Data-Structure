#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node* head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void reverse(Node*& head, Node*& tail){
    Node* tem= tail;
    head=tail;
    Node* tem2;
    while(tem!=NULL){
        tem2=tem->next;
        tem->next=tem->prev;
        tem->prev=tem2;
        tem=tem->prev;
    }
    tail=tem;
}
int main(){
    Node* head= new Node(10);
    Node* a=new Node(20);
    Node* b= new Node(30);
    Node *c= new Node(40);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    Node* tail=c;
    reverse(head,tail);
    print(head);
    return 0;
}