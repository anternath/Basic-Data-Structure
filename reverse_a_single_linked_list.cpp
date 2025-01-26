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
void reverse(Node* n,Node*& head){
    if(n->next==NULL){
        head=n;
        return;
    }
    reverse(n->next,head);
    n->next->next=n;
    n->next=NULL;
    n->next=n;
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
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    reverse(head,head);
    print(head);
    return 0;
}