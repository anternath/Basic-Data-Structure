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
void left_view(Node* root){
    vector<int>v;
    queue<pair<Node*,int>>q;
    if(root)q.push({root,1});
    int frq[1000]={false};
    while(!q.empty()){
        pair<Node*,int> pr= q.front();
        Node* node= pr.first;
        int level= pr.second;
        q.pop();

        if(frq[level]==false){
            v.push_back(node->val);
            frq[level]=true;
        }

        if(node->left)q.push({node->left,level+1});
        if(node->right)q.push({node->right,level+1});
    }
    for(int i=0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    Node* root = input();
    left_view(root);
    return 0;
}