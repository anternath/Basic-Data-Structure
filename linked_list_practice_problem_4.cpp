#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_a_node(Node *&head, int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head=newnode;
    }
    else{
        Node* tem= head;
        while(tem->next!=NULL){
            tem= tem->next;
        }
        tem->next= newnode;
    }
}
void print_linked_list(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void insert_a_node_at_position(Node * &head, int pos, int val){
    Node * newnode = new Node(val);
    Node* tem= head;
    if(pos==0){
        newnode->next= head;
        head=newnode;
        print_linked_list(head);
        return;
    }
    for(int i=1; i<pos; i++){
        tem=tem->next;
        if(tem==NULL){
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newnode->next= tem->next;
    tem->next= newnode;
    print_linked_list(head);
}

int main(){
    Node* head = NULL;
    int value;
    while(true){
        cin>>value;
        if(value==-1)break;
        else{
            insert_a_node(head,value);
        }
    }
    while(true){
    int pos, val;
    cin>>pos;
    if(pos==-1){
        break;
    }
    cin>>val;
    insert_a_node_at_position(head,pos,val);
    }
    
    return 0;
}