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
void insert_at_tail(Node* &head, int v){
    Node* newnode = new Node(v);
    if(head==NULL){
        head = newnode;
        return;
    }
    Node * tem = head;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=newnode;
}
void print_linked_list(Node* head){
    Node *tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem= tem->next;
    }
}
int main(){
    Node* head = NULL;
    cout<<"Option 1: ";
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    print_linked_list(head);
    return 0;
}