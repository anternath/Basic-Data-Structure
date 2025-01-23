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
int count(Node* head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count ++;
    }
    return count;
}
void insert_node_at_tail(Node* &head,int val){
    Node* newnode= new Node(val);
    Node* tem= head;
    if(head==NULL){
        head=newnode;
        return;
    }
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=newnode;
}
void insert_head(Node*&head,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    
}
void delete_node(Node*& head,int pos){
    if(pos ==0){
        Node* tem1=head;
        Node* deletenode1=tem1;
        head=tem1->next;
        delete deletenode1;
        return;
    }
    Node* tem= head;
    for(int i=1; i<pos; i++){
        tem=tem->next;
        if(tem==NULL||tem->next==NULL){
            return;
        }
    }
    Node*deletenode=tem->next;
    tem->next=tem->next->next;
    delete deletenode;
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
    int t;
    cin>>t;
    while(t--){
        
        int op,v;
        cin>>op>>v;
        if(op==0){
            insert_head(head,v);
        }
        else if(op==1){
            insert_node_at_tail(head,v);
        }
        else if(op==2){
            delete_node(head,v);
        }
        print(head);
    }
    return 0;
}