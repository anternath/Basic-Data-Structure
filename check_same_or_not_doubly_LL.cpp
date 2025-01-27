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
void input_node_insert(Node *& head, Node*& tail,int v){
    Node* newnode= new Node(v);
    if(head==NULL){
        head= newnode;
        tail=head;
        return;
    }
    Node* tem= head;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

int size(Node* head){
    Node* tem= head;
    int cnt=0;
    while(tem!=NULL){
        cnt++;
        tem=tem->next;
    }
    return cnt;
}
void same_or_not(Node* head, Node* head1){
    int siz= size(head);
    Node* tem1= head;
    Node* tem2= head1;
    int flag=0;
    for(int i=1; i<siz; i++){
        if(tem1->val!=tem2->val){
            flag=1;
            break;
        }
        else{
            tem1=tem1->next;
            tem2=tem2->next;
        }
    }
    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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
           input_node_insert(head,tail,v); 
        }
    }
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        else{
            input_node_insert(head1,tail1,v);
        }
    }

    if(size(head)==size(head1)){
        same_or_not(head,head1);
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}