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
        TreeNode* convert(vector<int>& v,int l,int r){
            if(l>r) return NULL;
            int mid=(l+r)/2;
            TreeNode* root= new TreeNode(v[mid]);
            TreeNode* leftnode = convert(v,l,mid-1);
            root->left=leftnode;
            TreeNode* rightnode= convert(v,mid+1,r);
            root->right=rightnode;
            return root;
        }
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            TreeNode* root= convert(nums,0,nums.size()-1);
            return root;
        }
    };