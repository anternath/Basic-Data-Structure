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
class myqueue{
    public:
    Node* head=NULL;
    Node*tail=NULL;
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
        tail=newnode;
    }
    void pop(){
        cnt--;
        Node* deletenode= head;
        head=head->next;
        delete deletenode;
    }
    int top(){
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
    myqueue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    cout<<qu.top()<<endl;
    qu.pop();
    cout<<qu.top()<<endl;
    qu.pop();
    cout<<qu.top()<<endl;
    return 0;
}