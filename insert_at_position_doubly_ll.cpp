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
void insert_at_position(Node*& head, Node*& tail, int v, int pos){
    Node* newnode= new Node(v);
    Node* tem=head;
    
    for(int i=1; i<pos; i++){
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    newnode->prev=tem;
    newnode->next->prev=newnode;
    
    
}
void insert_head(Node* & head,int v){
    Node* newnode = new Node(v);
    Node* tem= head;
    newnode->next=tem;
    tem->prev=newnode;
    head=newnode;
}
void insert_tail(Node* & tail, int v){
    Node* newnode=new Node(v);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
int size(Node* head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
void print_normal(Node*head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* tem= tail;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
int main(){
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* tail=c;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    int val,pos;
    cin>>val>>pos;
    if(pos==0){
        insert_head(head,val);
    }
    else if(size(head)==pos){
        insert_tail(tail,val);
    }
    else if(size(head)<pos){
        cout<<"Invalid position!"<<endl;
    }
    else{
        insert_at_position(head,tail,val,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}