#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next=NULL;
    }
};
int main(){
    Node head(10);
    Node a(20);
    Node b(30);
    Node c(40);
    Node d(50);

    head.next=&a;
    a.next=&b;
    b.next=&c;
    c.next=&d;

    Node* tem= &head;
    while(tem!= NULL){
        cout<<tem->val<<endl;
        tem= tem->next;
    }
    return 0;
}