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
Node* input_tree(){
    queue<Node*>q;
    Node* root;
    int v;
    cin>>v;
    if(v==-1) root=NULL;
    else root= new Node(v);
    if(root) q.push(root);
    while(!q.empty()){
        Node* f= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1) myleft=NULL;
        else myleft= new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);

        f->left=myleft;
        f->right=myright;

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return root;
}
void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node* f= q.front();
        cout<<f->val<<" ";
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
}
int main(){
    Node* root= input_tree();
    level_order(root);
    return 0;
}