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
void insert_at_tail(Node* &head,int v){
    Node* NewNode= new Node(v);
    if(head==NULL){
        head=NewNode;
        //return; else use na korle return must dite hobe
        
    }
    else{
        Node* tem = head;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=NewNode;
    }
}
void print_linked_list(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem= tem->next;
    }
    cout<<endl;
}
int main(){
    Node* head= NULL;
    int value;
    while(true){
        
        cin>>value;
        if(value!=-1){
            insert_at_tail(head,value);
        }
        else{
           
            break;
        }
    }
     print_linked_list(head);
    return 0;
}