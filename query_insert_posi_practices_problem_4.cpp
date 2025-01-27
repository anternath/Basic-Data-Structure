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
void insert_head(Node*& head, Node*& tail, int v){
    Node * newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        tail=head;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
int size(Node * head){
    Node * tem= head;
    int cnt=0;
    while(tem!=NULL){
        cnt++;
        tem=tem->next;
    }
    return cnt;
}
void insert_at_pos(Node* head, Node* &tail,int pos, int v){
    Node* newnode= new Node(v);
    Node* tem= head;
    if(pos==size(head)){
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        return;
    }
    for(int i=1; i<pos; i++){
         tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    newnode->prev=tem;
    newnode->next->prev=newnode;
}
void print(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void print_reverse(Node * tail){
    Node* tem= tail;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
int main(){
    Node * head= NULL;
    Node* tail= NULL;
    int n,op,v;
    cin>>n;
    while(n--){
        cin>>op>>v;
        if(op==0){
           insert_head(head,tail,v); 
           print(head);
            print_reverse(tail);
        }
        else if(op>size(head)){
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_pos(head,tail,op,v);
            print(head);
            print_reverse(tail);
        }
        
    }
    
    return 0;
}