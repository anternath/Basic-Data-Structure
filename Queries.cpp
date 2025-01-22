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
void insert_head(Node* &head,Node*& tail, int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}

void print_linked_list(Node* head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
int count_size(Node* head){
    Node * tem=head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
void delete_node_at_position(Node* &head,Node*& tail,int val){
    Node * tem=head;
    if(val==0){
       Node* delelenode=head;
       head=tem->next;
       delete delelenode;
    }
    else{
        for(int i=1; i<val; i++){
        tem=tem->next;
        if(tem==NULL){
            return;
        }
    }
    Node* deletenode= tem->next;
    tem->next=tem->next->next;
    delete deletenode;
    }
}
int main(){
   Node* head=NULL;
   Node* tail=NULL;
   int t,op,val;
   cin>>t;
   while(t--){
    cin>>op>>val;
    if(op==0){
        insert_head(head,tail,val);
    }
    else if(op==1){
        
        insert_at_tail(head,tail,val);
    }
    else if(op==2){
        if(val==count_size(head)-1){
            print_linked_list(head);
        }
        delete_node_at_position(head,tail,val);
    }
    print_linked_list(head);
   } 
   
    return 0;
}