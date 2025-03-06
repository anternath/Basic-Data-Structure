#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->left=NULL;
        this->val=val;
        this->right=right;
    }
};
Node* input_level_order(){
    int v;
    cin>>v;
    Node* root;
    if(v==-1) root= NULL;
    else root= new Node(v);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft= new Node(l);
        if(r==-1) myright=NULL;
        else myright= new Node(r);

        p->left=myleft;
        p->right=myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void output_level_order(Node* root){
    queue<Node*>q;
    if(root==NULL) return;
    if(root) q.push(root);
    while(!q.empty()){
        Node* pr= q.front();
        q.pop();

        cout<<pr->val<<" ";

        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);
    }
}
int main(){
    Node* root= input_level_order();
    output_level_order(root);
    return 0;
}