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

int count_size(Node * head){
    Node* tem= head;
    int count=0;
    while(tem!=NULL){
        count++;
        tem=tem->next;
    }
    return count;
}
void search_value(Node* head, int que){
    Node* tem= head;
    int count = -1;
    bool flag= false;
    while(tem!=NULL){
        if(tem->val==que){
            count++;
            cout<<count<<endl;
            flag=true;
            return;
        }
        count++;
        tem=tem->next;
    }
    if(flag==false){
        cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* head= NULL;
        Node* tail= NULL;
        int que;
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
    cin>>que;
    search_value(head,que);
    }

    return 0;
}