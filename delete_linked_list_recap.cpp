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
void delete_node(Node* head, int pos){
    Node* tem= head;
    for(int i=1; i<pos; i++){
        tem= tem->next;
    }
    Node* deleteNode = tem->next;
    tem->next=tem->next->next;
    delete deleteNode;
}
void print_linked_list(Node *head){
    Node * tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem= tem->next;
    }
    cout<<endl;
}
void delete_head(Node *& head){
    Node * tem= head;
    head=tem->next;
    delete tem;
}
int linked_list_size(Node* head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count ++;
        tem= tem->next;
    }
    return count;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail= d;
    head->next= a;
    a->next=b;
    b->next=c;
    c->next=d;
    int pos;
    cin>> pos;
    if(pos>=linked_list_size(head)){
        cout<<"Invalid Position"<<endl;
    }
    else if(pos==0){
        delete_head(head);
    }
    else delete_node(head,pos);
    print_linked_list(head);
    return 0;
}