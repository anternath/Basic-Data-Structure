#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head, int v){
    Node* Newnode = new Node(v);
    if(head==NULL){
        head=Newnode;
        return;
    }
    Node* tem= head;
    while(tem->next!=NULL){
        tem=tem->next;
    }
    tem->next=Newnode;
}
void print_linked_list(Node * head){
    Node* tem= head;
    while(tem!=NULL){
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl;
}
void delete_a_node(Node*& head, int pos){
    Node* tem= head;
    Node* tem1;
    if(pos==0){
        if(head==NULL){
            cout<<"Head is empty!"<<endl;
            return;

        }
        tem1=head;
        head=tem->next;
        delete tem1;
    }
    else{
        for(int i=1; i<pos; i++){
        tem= tem->next;
    }
    tem->next=tem->next->next;
    delete tem1;
    }
    return;
}
int main(){
    Node * head=NULL;
    while(true)
    {
    cout<<"Option 1 insert at tail :"<<endl; 
    cout<<"Option 2 print linked list :"<<endl; 
    cout<<"Option 3 delete node at position :"<<endl; 
    cout<<"Option 4 terminate :"<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v;
        cin>>v;
        insert_at_tail(head,v);
    } 
    else if(op==2){
        cout<<"Your linked list :";
        print_linked_list(head);
    }
    else if(op==3){
        int pos;
        cin>>pos;
        delete_a_node(head,pos);
    }
    else if(op==4){
     break;   
    }
    }
    return 0;
}