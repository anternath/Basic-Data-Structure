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
int print_linked_list(Node* head){
    Node*tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem= tem->next;
    }
    return count;
}
void print_middle_value(Node* head){
    int middle= print_linked_list(head)-1;
    if(print_linked_list(head)%2==0){
        Node* tem= head;
        for(int i=0; i<middle/2; i++){
            tem=tem->next;
        }
        cout<<tem->val<<" "<<tem->next->val;
    }
    else{
         Node* tem= head;
        for(int i=0; i<middle/2; i++){
            tem=tem->next;
        }
        cout<<tem->val;
    }
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
    print_middle_value(head);
    return 0;
}