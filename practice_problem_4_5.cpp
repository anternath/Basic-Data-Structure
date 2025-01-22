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
void insert_node(Node*& head, Node*& tail, int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail= head;
    }
    else{
        tail->next=newnode;
        tail= newnode;
    }
}
void sorting_linked_list(Node* Head){
    for(Node* i=Head; i->next!=NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
}
void print_linked_list(Node* head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
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
    sorting_linked_list(head);
    print_linked_list(head);
    return 0;
}