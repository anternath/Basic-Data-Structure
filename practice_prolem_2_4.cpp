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
void insert_node(Node*& head, Node*& tail, int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail= head;
    }
    else{
        tail->next=newnode;
        tail= newnode;
    }
}
void check_maximam_value(Node* head){
    Node* tem= head;
    int max = INT_MIN;
    while(tem!=NULL){
        if(tem->val>max){
            max=tem->val;
        }
        tem=tem->next;
    }
    cout<<max;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1)break;
        else{
            insert_node(head,tail,v);
        }
    }
    check_maximam_value(head);
    return 0;
}