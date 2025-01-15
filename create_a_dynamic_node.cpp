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
int main(){
    Node* head = new Node(20);
    Node* a= new Node(10);//dynamic object
    Node b(30);//normal object
    head->next=a;//dynamic object pointer retrun kore bole a er modde sorasori address thake
    a->next=&b;//normal object jehetu alada kore address sign use korte hoi
    
    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    cout<<a->next->val<<endl;
    return 0;
}