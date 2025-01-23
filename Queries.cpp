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
void insert_at_head(Node* &head, Node* & tail,int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head=newnode;
        tail=head;
        return;
    }
    newnode->next=head;
    head=newnode;

}
void insert_at_tail(Node*& head, Node* &tail,int v){
    Node* newnode=new Node(v);
    if(head==NULL){
        head=newnode;
        tail=head;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_linked_list(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void delete_at_pos(Node*& head, Node*&tail,int pos){
    Node* tem= head;

    if(head==NULL){
        return;
    }
    else if(pos==0){
        Node* deletenode= head;
        head=head->next;
        delete deletenode;
    }
    
    else{
        for(int i=1; i<pos; i++){
            tem=tem->next;
            if(tem==NULL||tem->next==NULL){
                return;
            }
        }
        if(tem->next->next==NULL){
            Node* deletenode= tem->next;
            tail=tem;
            delete deletenode;
        }
        Node* deletenode= tem->next;
        tem->next=tem->next->next;
        if(deletenode==tail){
            tail=tem->next;
        }
        delete deletenode;
    }
}
int main(){
    Node* head= NULL;
    Node* tail=NULL;
    int t,op,v;
    cin>>t;
    while(t--){
        cin>>op>>v;
        if(op==0){
            insert_at_head(head,tail,v);
        }
        else if(op==1){
            insert_at_tail(head,tail,v);
        }
        else if(op==2){
            delete_at_pos(head,tail,v);
        }
        print_linked_list(head);
    }
    return 0;
}