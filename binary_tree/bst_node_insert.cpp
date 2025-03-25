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
void insert_node(Node* &root, int val){
    if(root==NULL) {
        root = new Node(val);
        return;
    }
    if(root->val>val) insert_node(root->left,val);
    else insert_node(root->right,val);
}
void print(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
}
void print_level_order(Node * root){
    queue<Node*> q;
    if(root)q.push(root);
    while(!q.empty()){
        Node* pr= q.front();
        q.pop();
        
        cout<<pr->val<<" ";

        if(pr->left) q.push(pr->left);
        if(pr->right)q.push(pr->right);
    }
}
int main(){
    Node* root = input();
    int num;
    cin>>num;
    insert_node(root,13);
    insert_node(root,32);
    insert_node(root,27);
    insert_node(root,22);
    print_level_order(root);
    return 0;
}