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
void input_node_insert(Node *& head, Node*& tail,int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        tail=head;
        return;
    }
    Node* tem= head;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse_doubly_LL(Node * head, Node* tail,Node* & head1, Node* & tail1){
    Node * tem= tail;
    while(tem!=NULL){
        Node * newnode= new Node(tem->val);
        if(head1==NULL){
            head1=newnode;
            tail1=head1;
        }
        else{
            tail1->next=newnode;
            newnode->prev=tail1;
            tail1=newnode;
        }
        tem=tem->prev;
    }
}
void print(Node * head,Node* head1){
    Node* tem= head;
    Node* tem1= head1;
    int flag=0;
    while(tem!=NULL){
        if(tem->val!=tem1->val){
            flag=1;
            break;
        }
        tem=tem->next;
        tem1=tem1->next;
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    Node* head= NULL;
    Node* tail= NULL;
    Node* head1=NULL;
    Node* tail1=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        else{
           input_node_insert(head,tail,v); 
        }
    }
    reverse_doubly_LL(head,tail,head1,tail1);
    print(head,head1);
    return 0;
}