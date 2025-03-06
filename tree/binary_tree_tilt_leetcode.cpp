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
    int abbs=0;
public:
    
    int tilt(TreeNode* root){
        if(root==NULL) return 0;
        int l= tilt(root->left);
        int r =tilt(root->right);
        abbs += abs(l-r);
        return r+l+root->val;
    }
    int findTilt(TreeNode* root) {
        tilt(root);
        return abbs;
    }
};