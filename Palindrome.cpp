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
void insert_at_tail(Node*& head, Node*&tail,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void print(Node* head){
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
            insert_at_tail(head,tail,v);
        }
    }
    Node* i=head;
    Node* j=tail;
    bool flag=true;
    while(i!=j&&i->prev!=j){
        if(i->val==j->val){
            i=i->next;
            j=j->prev;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}