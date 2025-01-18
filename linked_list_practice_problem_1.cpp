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
void insert_node(Node* &head,int v){
    Node* newnode = new Node(v);
    if(head==NULL){
        head=newnode;
    }
    else{
        Node* tem= head;
        while(tem->next!=NULL){
            tem=tem->next;
        }
        tem->next=newnode;
    }
}
void print_linked_list(Node* head){
    Node*tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem= tem->next;
    }
    cout<<count;
    cout<<endl;
}
int main(){
    Node* head= NULL;
    int value;
    while(true){
        cin>>value;
        if(value==-1) break;
        else{
            insert_node(head,value);
        }
    }
    print_linked_list(head);
    return 0;
}