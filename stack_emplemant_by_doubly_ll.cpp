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
class myStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int cnt=0;
    void push(int val){
        cnt++;
        Node* newnode= new Node(val);
        if(head==NULL){
            head=newnode;
            tail=head;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop(){
        cnt--;
        Node* deletenode= tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else {
            tail->next=NULL;
        }
        delete deletenode;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return cnt;
    }
    bool empty(){
        if(size()==0){
            return true;
        }
        else return false;
    }
};
int main(){
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    if(st.empty()==true){
        cout<<"Linked list is empty!";
    }
    else{
        st.pop();
    }
    // while(!st.empty()){
    // cout<<st.top()<<endl;
    // st.pop();
    // }
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    return 0;
}