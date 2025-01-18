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
void node_insert(Node* &head, int v){
        Node* newnode= new Node(v);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node* tem= head;
            while(tem->next!=NULL){
                tem=tem->next;
            }
            tem->next=newnode;
        }
    }
int count_linked_list_size(Node* head){
    Node * tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
int check_sorted_linked_list(Node* head){
    Node* tem= head;
    int flag1;
    int size=count_linked_list_size(head);
    for(int i=1; i<size; i++){
        if(tem->val<tem->next->val){
            flag1= 1;
            tem=tem->next;
        }
        else{
            flag1=0;
            break;
            }
    }
    Node* tem1= head;
    if(flag1==0){
        for(int i=1; i<size; i++){
            if(tem1->val>tem1->next->val){
                flag1=1;
                tem1=tem1->next;
            }
            else{
                flag1=0;
                break;
            }
        }
        
    }
    return flag1;
}
int main(){
    Node* head= NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1)break;
        else{
            node_insert(head,val);
        }
    }
    if(check_sorted_linked_list(head)==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}