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
Node* input_level_order(){
    int v;
    cin>>v;
    Node* root;
    if(v==-1){
        root=NULL;
    }
    else{
        root=new Node(v);
    }
    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1){
            myleft=NULL;
        }
        else{
            myleft=new Node(l);
        }
        if(r==-1){
            myright=NULL;
        }
        else{
            myright= new Node(r);
        }
        p->left=myleft;
        p->right=myright;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
int count(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL&&root->right==NULL){
        return 1;
    }
    else{
        int l= count(root->left);
        int r= count(root->right);
        return l+r;
    }
}
int main(){
    Node* root=input_level_order();
    cout<<count(root);
    return 0;
}