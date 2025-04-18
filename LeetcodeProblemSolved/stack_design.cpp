#include<bits/stdc++.h>
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class MyLinkedList {
public:
Node* head=NULL;
Node* tail=NULL;
int cnt=0;
    MyLinkedList() {
       
    }
    
    int get(int index) {
        if(cnt==0){
            return -1;
        }
        else if(cnt<=index){
            return -1;
        }
        else{
            Node* tem= head;
            for(int i=0; i<index; i++){
                tem=tem->next;
            }
            return tem->val;
        }
    }
    
    void addAtHead(int val) {
        cnt++;
        if(head==NULL){
            head= new Node(val);
            tail=head;
        }
        else{
            Node* newnode= new Node(val);
            newnode->next= head;
            head=newnode;
        }
    }
    
    void addAtTail(int val) {
        cnt++;
        Node* newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            tail=head;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            cnt++;
            Node* newnode= new Node(val);
            newnode->next= head;
            head=newnode;
        }
        else if(index==cnt){
            cnt++;
            Node* newnode =new Node(val);
            tail->next=newnode;
            tail=newnode;
        }
        else if(index<cnt){
            cnt++;
            Node* tem=head;
            for(int i=0; i<index-1; i++){
                tem=tem->next;
            }
            Node* newnode= new Node(val);
            newnode->next=tem->next;
            tem->next=newnode;
        }
        else return;
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL){
            return;
        }
        else if(index==0){
            cnt--;
            Node* tem= head;
            head=head->next;
            delete tem;
        }
        else if(index<cnt) {
            cnt--;
            Node* tem=head;
            for(int i=0; i<index-1; i++){
                tem=tem->next;
            }
            Node* deletenode= tem->next;
            tem->next=deletenode->next;
            delete deletenode;
        }
        else return;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */