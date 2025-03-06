/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        vector<int>v;
        vector<int>v1;
        void pre(TreeNode* root){
            if(root==NULL)return;
            if(root->left==NULL&& root->right==NULL){
                v.push_back(root->val);
            }
            pre(root->left);
            pre(root->right);
        }
        void preorder(TreeNode* r){
            if(r==NULL) return;
            if(r->left==NULL&& r->right==NULL){
                v1.push_back(r->val);
            }
            preorder(r->left);
            preorder(r->right);
        }
        bool leafSimilar(TreeNode* root1, TreeNode* root2) {
            // queue<TreeNode*>q;
            // queue<TreeNode*>q1;
            // vector<int>v;
            // vector<int>v1;
            // if(root1)q.push(root1);
            // if(root2)q1.push(root2);
            // while(!q.empty()){
            //     TreeNode* pr= q.front();
            //     q.pop();
            //     if(pr->left==NULL&&pr->right==NULL){
            //         v.push_back(pr->val);
            //     }
    
            //     if(pr->left)q.push(pr->left);
            //     if(pr->right)q.push(pr->right);
            // }
            // while(!q1.empty()){
            //     TreeNode* pr= q1.front();
            //     q1.pop();
            //     if(pr->left==NULL&&pr->right==NULL){
            //         v1.push_back(pr->val);
            //     }
    
            //     if(pr->left)q1.push(pr->left);
            //     if(pr->right)q1.push(pr->right);
            // }
            // for(int i=0; i<v.size(); i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;
            // for(int i=0; i<v1.size(); i++){
            //     cout<<v1[i]<<" ";
            // }
            // if(v==v1)return true;
            // else return false;
            pre(root1);
            preorder(root2);
            if(v==v1) return true;
            else return false;
        }
    };