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
void input_insert_node(Node*& head, Node*& tail, int v){
    Node * newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        tail=head;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail= newnode;
}
void sortint_doubly_LL(Node* head){
    Node* tem= head;
    for(Node* i=tem; i->next!=NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val,j->val);
            }
        }
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
    Node * head= NULL;
    Node* tail= NULL;
    int n;
    while(true){
        cin>>n;
        if(n==-1){
            break;
        }
        else{
            input_insert_node(head,tail,n);
        }
    }
    sortint_doubly_LL(head);
    print(head);
    return 0;
}