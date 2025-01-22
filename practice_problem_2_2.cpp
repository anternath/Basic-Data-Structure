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
void insert_node(Node* &head,Node*& tail, int val){
    Node * newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void print_linked_list_by_recursion(Node * n){
    if(n==NULL){
        return;
    }
    print_linked_list_by_recursion(n->next);
    cout<<n->val<<" ";
    
}
int main(){
    Node* head= NULL;
    Node* tail= NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        else{
            insert_node(head,tail,v);
        }
    }
    print_linked_list_by_recursion(head);
    return 0;
}