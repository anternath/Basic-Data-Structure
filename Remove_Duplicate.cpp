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
void insert_node(Node*& head,Node *& tail,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail= head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void remove_duplicate(Node* head){
    for(Node* i=head; i!=NULL; i=i->next){
        Node* tem=i;
        for(Node* j=i->next; j!=NULL;){
            if(i->val==j->val){
                tem->next=j->next;
                delete j;
                j=tem->next;
            }
            else{
                tem=j;
                j=j->next;
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
    Node* head=NULL;
    Node* tail=NULL;
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
    remove_duplicate(head);
    print(head);
    
    return 0;
}