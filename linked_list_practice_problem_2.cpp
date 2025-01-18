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
int check_duplicate_value(Node* head){
    Node* tem= head;
    vector<int>v(101,0);
    int flag=0;
    while(tem!=NULL){
        v[tem->val]++;
        tem=tem->next;
    }
    for(int i=0; i<=100; i++){
        if(v[i]>1){
            flag=1;
            break;
        }
    }
    return flag;
}
int main(){
    Node* head= NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        else{
            node_insert(head,val);
        }
    }
    if(check_duplicate_value(head)==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}