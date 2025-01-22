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
int count_linked_list_size(Node* head){
    int count=0;
    for(Node* i=head; i!=NULL; i=i->next){
        count++;
    }
    return count;
}
void print_middle(Node* head, int pos){
    Node* tem= head;
    if(pos%2==0){
        for(int i=1; i<pos/2; i++){
            tem= tem->next;
        }
        cout<<tem->val<<" "<<tem->next->val;
    }
    else{
        for(int i=1; i<pos/2; i++){
            tem=tem->next;
        }
        cout<<tem->next->val;
    }
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
    int mid= count_linked_list_size(head);
    print_middle(head,mid);
    return 0;
}