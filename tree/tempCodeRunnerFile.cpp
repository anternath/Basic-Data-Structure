void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        Node* f= q.front();
        cout<<f->val<<" ";
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
}