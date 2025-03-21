#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node* &head, Node* &tail, int val){
    Node* newnode= new Node(val);
    if(head==NULL){
     head=newnode;
     tail=head;
     return;  
    }
     tail->next=newnode;
        tail=newnode;
}
void print_linked_list(Node *head){
    Node * tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem= tem->next;
    }
    cout<<endl;
}
void insert(Node* head, int pos, int val){
    Node* newnode= new Node(val);
    Node * tem= head;
    for(int i=1; i<pos; i++){
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    
}
void insert_head(Node *& head, int val){
    Node* newnode= new Node(val);
    newnode->next=head;
    head=newnode;
}
int linked_list_size(Node* head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count ++;
        tem= tem->next;
    }
    return count;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail= d;
    head->next= a;
    a->next=b;
    b->next=c;
    c->next=d;
    int size=linked_list_size(head);
    int pos,val;
    cin>>pos>>val;
    if(pos>size){
        cout<<"Invalid position!"<<endl;
    }
    else if(pos==size){
        cout<<size <<endl;
        insert_tail(head,tail,val);
    }
    else if(pos==0){
        insert_head(head,val);
    }
    else{
        insert(head,pos,val);
        
    }
    print_linked_list(head);
    cout<<tail->val<<endl;
    return 0;
}