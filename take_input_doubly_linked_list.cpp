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
void insert_node(Node* & head, Node*& tail, int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        tail=head;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
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
    Node* head=NULL;
    Node* tail=NULL;
    
    int v;
    while(true){
        cin>>v;
        if(v==-1)break;
        else{
            insert_node(head,tail,v);
        }
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}