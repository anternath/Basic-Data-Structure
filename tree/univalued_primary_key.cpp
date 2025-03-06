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
        bool isUnivalTree(TreeNode* root) {
            queue<TreeNode*>q;
            if(root)q.push(root);
            int x= root->val;
            while(!q.empty()){
                TreeNode* pr= q.front();
                q.pop();
                if(x!=pr->val) return false;
                if(pr->left){
                    q.push(pr->left);
                }
                if(pr->right){
                    q.push(pr->right);
                }
            }
            return true;
        }
    };