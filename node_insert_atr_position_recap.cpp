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
void insert_at_position(Node*& head,int pos,int v){
    Node * newnode = new Node(v);
    Node * tmp= head;
    for(int i=1; i<pos; i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}
int size_count(Node* head){
    Node* tmp= head;
    int count =0;
    while(tmp!=NULL){
        count ++;
    }
    return count;
}
void print_linked_list(Node * head){
     Node* tmp= head;
     while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
     }
}
int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    int pos,val;
    cin>>pos,val;
    // if(pos>size_count(head)){
    //     cout<<"Invalid index";
    // }
    // else{
        insert_at_position(head,pos,val);
    // }
    print_linked_list(head);
    return 0;
}