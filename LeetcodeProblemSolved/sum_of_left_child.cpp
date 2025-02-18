#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	if(root==NULL) return 0;
	long long s=0;
	if(root->left){
		s+= root->left->data;
	}
	
	s+= leftSum(root->left);
	s+= leftSum(root->right);
	return s;
}