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
void level_order(Node* root){
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* pr= q.front();
        q.pop();

        cout<<pr->val<<" ";

        if(pr->left) q.push(pr->left);
        if(pr->right) q.push(pr->right);

    }
}
int main(){
    return 0;
}