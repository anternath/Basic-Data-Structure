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
void insert_node(Node* &head,Node*& tail,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head= newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void check_same_to_same(Node* head, Node* head1){
    Node * tem= head;
    Node * tem1= head1;
    bool flag= false;
    while(tem!=NULL){
        if(tem->val!=tem1->val){
            cout<<"NO";
            flag=true;
            return;
        }
        else{
            tem=tem->next;
            tem1=tem1->next;
        }
    }
    if(flag==false){
        cout<<"YES";
    }
}
int count_size(Node * head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
int main(){
    Node* head= NULL;
    Node* tail= NULL;
    Node* head1= NULL;
    Node* tail1= NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        else{
            insert_node(head,tail,v);
        }
    }
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        else{
            insert_node(head1,tail1,v);
        }
    }
    if(count_size(head)!=count_size(head1)){
        cout<<"NO";
    }
    else check_same_to_same(head,head1);
    return 0;
}