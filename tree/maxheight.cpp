#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input(){
    Node* root;
    int v;
    cin>>v;
    if(v==-1) root=NULL;
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
        else myright=new Node(r);

        p->left=myleft;
        p->right=myright;
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int maxhight(Node* root){
    if(root==NULL) return 0;
    int l= maxhight(root->left);
    int r= maxhight(root->right);
    return max(l,r)+1;
}
void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* f= q.front();
        q.pop();
        //jabotiyo kaj
        cout<<f->val<<" ";

       if(f->left){
        q.push(f->left);
       }
       if(f->right) q.push(f->right);
    }
}
int main(){
    Node* root= input();
    level_order(root);
    cout<<maxhight(root);
    return 0;
}