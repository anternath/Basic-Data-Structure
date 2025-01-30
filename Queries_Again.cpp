#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_head(Node*& head,Node*& tail,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else if(head!=NULL){
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
   
}
void insert_at_tail(Node*& tail,int val){
    Node* newnode= new Node(val);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insert_at_pos(Node* head,Node* tail, int pos, int val){
    Node* newnode= new Node(val);
    Node* tem= head;
    for(int i=1; i<pos; i++){
        tem=tem->next;
    }
    newnode->next=tem->next;
    newnode->prev=tem;
    tem->next=newnode;
    newnode->next->prev=newnode;
}
int size(Node* head){
    Node* tem= head;
    int cnt=0;
    while(tem!=NULL){
        cnt++;
        tem=tem->next;
    }
    return cnt;
}
void print_normal(Node*head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    Node* tem= tail;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->prev;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int n,pos,val;
    cin>>n;
    bool flag= false;
    while(n--){
        cin>>pos>>val;
        if(pos==0){
            insert_head(head,tail,val);
        }
        else if(pos>size(head)){
            flag=true;
        }
        else if(pos==size(head)){
             insert_at_tail(tail,val);
        }
        else{
           insert_at_pos(head,tail,pos,val);
        }
    if(flag==true){
        cout<<"Invalid"<<endl;
        flag=false;
    }
    else{
        cout<<"L -> ";
    print_normal(head);
    cout<<"R -> ";
    print_reverse(tail);
    }
    }
    
    return 0;
}