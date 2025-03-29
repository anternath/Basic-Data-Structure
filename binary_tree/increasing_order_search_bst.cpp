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
        void vpush(TreeNode* root){
            if(root==NULL) return;
            vpush(root->left);
            v.push_back(root->val);
            vpush(root->right);
        }
        TreeNode* ordersearch(TreeNode* root){
            if(v.size()>0){
                root = new TreeNode(v[0]);
            }
            TreeNode* cur= root;
           for(int i=1; i<v.size(); i++){
    
                cur->right = new TreeNode(v[i]);
                cur= cur->right;
           }
           return root;
        }
        TreeNode* increasingBST(TreeNode* root) {
            vpush(root);
            return ordersearch(root);
        }
    };