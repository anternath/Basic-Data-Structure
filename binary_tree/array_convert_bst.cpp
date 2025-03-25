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
Node* convert_bst(int ar[],int l,int r){
    if(l>r) return NULL;
    int mid= (l+r)/2;
    Node* root= new Node(ar[mid]);
    Node* leftnode= convert_bst(ar,l,mid-1);
    root->left= leftnode;
    Node* rightnode= convert_bst(ar,mid+1,r);
    root->right= rightnode;
    return root;
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
    int n;
    cin>>n;
    int ary[n];
    for(int i=0; i<n; i++){
        cin>>ary[i];
    }
    Node* root = convert_bst(ary,0,n-1);
    print_level_order(root);
    return 0;
}