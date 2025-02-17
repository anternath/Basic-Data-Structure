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
void print_level_order(Node* root){
    queue<Node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        Node* f= q.front();
        q.pop();

        cout<<f->val<<" ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
int main(){
    Node* root = input_level_order();
    print_level_order(root);
    return 0;
}