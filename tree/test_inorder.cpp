#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void in_order(Node* root){
    if(root==NULL){
        return;
    }
   cout<<root->val<<" ";
   in_order(root->left);
   in_order(root->right);

}
int main(){
    Node* root= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);
    Node* e= new Node(60);
    Node* f= new Node(70);
    Node* g= new Node(80);
    Node* h= new Node(90);
    Node* i= new Node(100);
    //connection
    root->right=b;
    root->left=a;
    a->right=d;
    a->left=c;
    c->right=f;
    d->right=g;
    b->right=e;
    e->left=h;
    e->right=i;
    in_order(root);
    return 0;
}