#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head, int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        cout<<"create a head"<<endl;
        return;
    }
    Node* tem= head;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=newnode;
}
void print_linked_list(Node *head){
    Node *tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void insert_at_position(Node* &head, int pos, int v){
    Node * newnode = new Node(v);
    
    Node * tem1=head;
    Node *tem;
    if(pos==0){
        newnode->next=tem1;
        head=newnode;
    }
   else{
    tem=head;
     for(int i=0; i<pos-1; i++){
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
   }

}
int main(){
    Node * head = NULL;
    while(true){
        cout<<"Option 1: insert at tail "<<endl;
    cout<<"Option 2: print linked list "<<endl;
    cout<<"Option 3: insert ar position "<<endl;
    cout<<"Option 4: Terminate "<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cout<<"please enter a value :";
        cin>>v;
        insert_at_tail(head,v);
        cout<<"inserted in tail";
    }
    else if(op==2){
        cout<<"Your Linked list : ";
        print_linked_list(head);
    }
    else if(op==3){
        int pos,v;
        cout<<"please enter position : ";
        cin>>pos;
        cout<<"please enter value : ";
        cin>>v;
        insert_at_position(head,pos,v);
        cout<<"inserted "<<v<<" at "<<pos<<" index!"<<endl;
    }
    else if(op==4){
        break;
    }
    }
    return 0;
}