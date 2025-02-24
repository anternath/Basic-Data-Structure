#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
Node* input(){
    int v;
    cin>>v;
    Node* root;
    if(v==-1){
        root=NULL;
    }
    else root= new Node(v);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* pr= q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l==-1) myleft=NULL;
        else myleft= new Node(l);
        if(r==-1) myright=NULL;
        else myright= new Node(r);

        pr->left=myleft;
        pr->right=myright;

        if(pr->left) q.push(pr->left);
        if(pr->right)q.push(pr->right);
    }
    return root;
}
vector<int>v;
void print(Node* root){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            return;
        }
        print(root->left);
        print(root->right);       
}
int main(){
    Node* root= input();
    print(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}