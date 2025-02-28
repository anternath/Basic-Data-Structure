#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node( int val){
        this->val=val;
        this->next=NULL;
    }
};
class myStack{
    public:
    Node* head= NULL;
    int cnt=0;
    void push(int val){
        cnt++;
        Node* newnode= new Node(val);
        if(head==NULL){
            head=newnode;
            return;
        }
        newnode->next= head;
        head=newnode;
        
    }
    void pop(){
        if(head==NULL){
            return;
        }
        else{
            cnt--;
            Node* tem= head;
            head=head->next;
            delete tem;
        }
    }
    int top(){
        if(head!=NULL){
            return head->val;
        }
        else return -1;
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
class myqueue{
    public:
    Node* head= NULL;
    Node* tail= NULL;
    int cnt=0;
    void push(int val){
        cnt++;
        Node* newnode =new Node(val);
        if(head==NULL){
            head=newnode;
            tail=head;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop(){
        if(head==NULL){
            return;
        }
        else{
            cnt--;
            Node* tem= head;
            head=head->next;
            delete tem;
        }
    }
    int front(){
        if(head!=NULL){
            return head->val;
        }
        else return -1;
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
    myqueue q;
    int n,k;
    cin>>n>>k;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    while(k--){
        int v;
        cin>>v;
        q.push(v);
    }
    bool check=true;
    if(st.size()==q.size()){
        while(!st.empty()){
            if(st.top()!=q.front()){
                check= false;
                break;
            }
            else{
                st.pop();
                q.pop();
            }
        }
    }
    else{
        check= false;
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}