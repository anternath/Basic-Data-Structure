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
int size(Node * head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
void delete_node_at_pos(Node* &head, Node* &tail, int pos){
    Node* tem= head;
    if(head==NULL||tail==NULL){
        cout<<"Invaid Index";
        return;
    }
    
    else if(pos==size(head)-1){
        Node* deletenode= tail;
        deletenode->prev->next=NULL;
        tail=deletenode->prev;
        delete deletenode;
        return;
    }
    else if(pos==0){
        Node* deletenode= tem;
        tem->next->prev=NULL;
        head=tem->next;
        delete deletenode;
        return;
    }
    for(int i=1; i<pos; i++){
        tem=tem->next;
    }
    Node* deletenode=tem->next;
    tem->next=tem->next->next;
    tem->next->prev=tem;
    delete deletenode;
    // Node* deletenode= tem->next;
    // tem->next=deletenode->next;
    // deletenode->next->prev=tem;
    // delete deletenode;
}

void print_normal(Node* head){
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
    Node* d= new Node(50);
    Node* tail=d;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    int pos;
    cin>>pos;
    if(pos>=size(head)){
        cout<<"Invalid Index"<<endl;
    }
    else{
        delete_node_at_pos(head,tail,pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}