#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->left=NULL;
        this->right=NULL;
        this->val=val;
    }
};
Node* input_level_order(){
    queue<Node*>q;
    Node* root;
    int v;
    cin>>v;
    if(v==-1) root=NULL;
    else root= new Node(v);
    if(root)q.push(root);
    while(!q.empty()){
        Node* pr=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,* myright;
        if(l==-1) myleft=NULL;
        else myleft = new Node(l);
        if(r==-1) myright=NULL;
        else myright= new Node(r);

        pr->left=myleft;
        pr->right=myright;
        if(pr->left)q.push(pr->left);
        if(pr->right)q.push(pr->right);
    }
    return root;
}
void left(Node* root){
    if(root->left==NULL) return;
    left(root->left);
    cout<<root->val<<" ";
}
void right(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    right(root->right);
}
int main(){
    Node* root= input_level_order();
    left(root);
    right(root);

    return 0;
}