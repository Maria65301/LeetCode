/*
Find the sum of all left leaves in a given binary tree.

Example:

    3
   / \
  9  20
    /  \
   15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isLeaf(TreeNode *node) {
        if(node==NULL) return false;
        if(node->left==NULL&&node->right==NULL) return true;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL) return sumOfLeftLeaves(root->right);
        if(isLeaf(root->left)) return root->left->val+sumOfLeftLeaves(root->right);
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
