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
void insert_node(Node* &head,Node*& tail, int val){
    Node * newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
// void print_linked_list_by_recursion(Node * n){
//     if(n==NULL){
//         return;
//     }
//     cout<<n->val<<" ";
//     print_linked_list(n->next);
// }
int size_linked_list(Node* head){
    int count=0;
    for(Node* i=head; i!=NULL; i=i->next){
        count++;
    }
    return count;
}
int main(){
    Node* head= NULL;
    Node* tail= NULL;
    Node* head1=NULL;
    Node* tail1=NULL;
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
    if(size_linked_list(head)==size_linked_list(head1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}