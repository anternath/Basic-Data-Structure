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
void insert_at_tail(Node* &head,Node* &tail,int val){//time complexity O(1);
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail= newnode;
    }
}
void print_linked_list(Node *head){
    Node * tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem= tem->next;
    }
    cout<<endl;
}
int main(){
    Node* head= NULL;
    Node* tail= NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
    }
    
    print_linked_list(head);
    return 0;
}