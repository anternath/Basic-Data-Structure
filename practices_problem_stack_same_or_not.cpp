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
    Node* head1=NULL;
    Node* tail1=NULL;
    int cnt=0;
    int cnt1=0;
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
    int size(){
        return cnt;
    }
    void push1(int val){
        cnt1++;
        Node* newnode= new Node(val);
        if(head1==NULL){
            head1=newnode;
            tail1=head1;
            return;
        }
        tail1->next=newnode;
        newnode->prev=tail1;
        tail1=newnode;
    }
    int size1(){
        return cnt1;
    }
    bool same(){
        Node* tem= head;
        Node* tem1= head1;
        while(tem!=NULL){
            if(tem->val!=tem1->val){
                return false;
                break;
            }
            else{
                tem=tem->next;
                tem1=tem1->next;
            }
        }
        return true;
    }
};

int main(){
    myStack st;
    int n;
    cin>>n;
    while(n--){
        int v;
        cin>>v;
        st.push(v);
    }
    int k;
    cin>>k;
    while(k--){
        int v1;
        cin>>v1;
        st.push1(v1);
    }
    if(st.size()==st.size1()){
       if(st.same()){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}