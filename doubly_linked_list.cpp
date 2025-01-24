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
    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* tail=b;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    // cout<<head->val<<" "<<head->next->val<<" "<<a->next->val<<endl;
    // cout<<b->val<<" "<<b->prev->val<<" "<<a->prev->val;
    print_normal(head);
    print_reverse(tail);
    return 0;
}