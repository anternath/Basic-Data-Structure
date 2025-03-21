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
int maxlength(Node* root){
    if(root==NULL) return 0;
    int l= maxlength(root->left);
    int r= maxlength(root->right);
    return max(l,r)+1;
}
int countnode(Node* root){
    if(root==NULL) return 0;
    int l= countnode(root->left);
    int r= countnode(root->right);
    return l+r+1;
}
int main(){
    Node* root= input_level_order();
    int level= maxlength(root);
    int nodenumber= countnode(root);
    if(pow(2,level)-1==nodenumber){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}