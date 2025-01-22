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
int check_max(Node* head){
    Node* tem= head;
    int max=INT_MIN;
    while(tem!=NULL){
        if(tem->val>max){
            max=tem->val;
        }
        tem=tem->next;
    }
    return max;
}
int check_min(Node* head){
    Node* tem= head;
    int min=INT_MAX;
    while(tem!=NULL){
        if(tem->val<min){
            min=tem->val;
        }
        tem=tem->next;
    }
    return min;
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
    
    cout<<(check_max(head)-check_min(head));
    return 0;
}