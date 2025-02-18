#include <bits/stdc++.h> 
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue {
public:
    Node* head=NULL;
    Node* tail=NULL;
    int cnt=0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(cnt==0){
            return true;
        }
        else return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        cnt++;
        Node* newnode= new Node(data);
        if(head==NULL){
            head=newnode;
            tail=head;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(head==NULL){
            return -1;
        }
        else{
            cnt--;
            int tem1= head->val;
            Node* tem= head;
            head=head->next;
            delete tem;
            return tem1;
        }
    }

    int front() {
        // Implement the front() function
        if(head==NULL){
            return -1;
        }
        else return head->val;
    }
};