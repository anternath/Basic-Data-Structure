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
void reverse_doubly_LL(Node* & head, Node* & tail){
    Node* i= head;
    Node* j=tail;
    while(i!=j&& i->prev!=j){
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
}
void print(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
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
           input_node_insert(head,tail,v); 
        }
    }
    reverse_doubly_LL(head,tail);
    print(head);
    return 0;
}