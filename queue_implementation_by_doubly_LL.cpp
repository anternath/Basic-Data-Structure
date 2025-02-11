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
class myQueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int cnt=0;
    void push(int val){
        cnt++;
        Node* newnode=new Node(val);
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
        Node* deletenode= head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
            delete deletenode;
            return;
        }
        head->prev=NULL;
        delete deletenode;
        return ;
    }
    int front(){
        return head->val;
    }
    int size(){
        return cnt;
    }
    bool empty(){
        if(size()==0) return true;
        else return false;
    }
};
int main(){
    myQueue qu;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        qu.push(v);
    }
    while(!qu.empty()){
        
        cout<<qu.front()<<endl;
        qu.pop();
    }
    return 0;
}