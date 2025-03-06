#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->left=NULL;
        this->val=val;
        this->right=right;
    }
};
void input_level_order(Node* root){
    int v;
    cin>>v;
    if(v==-1) root=NULL;
    else root= new Node(v);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        Node* p= q.front();
        q.pop();

        
    } 
}
int main(){
    return 0;
}