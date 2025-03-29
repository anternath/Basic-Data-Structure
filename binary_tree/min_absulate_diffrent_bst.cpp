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
        void sort(TreeNode* root){
            if(root==NULL) return;
            sort(root->left);
            v.push_back(root->val);
            sort(root->right);
        }
        int getMinimumDifference(TreeNode* root) {
            sort(root);
            int l=0;
            int min= INT_MAX;
            for(int i=0; i<v.size()-1; i++){
                int cur= v[i+1]-v[i];
                cout<<cur<<endl;
                if(cur<=min){
                    min=cur;
                }
            }
            return min;
        }
    };