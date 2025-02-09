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
    cout<<endl;
}
int main(){
    Node* head = NULL;
    while(true){
    cout<<"Option 1 insert node: "<<endl;
    cout<<"Option 2 print linked list :"<<endl;
    cout<<"Option 3 on terminate!"<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2){
         cout<<"Your Linked list :";
         print_linked_list(head);
    }
    else if(op==3){
        break;
    }
    }
   
    return 0;
}