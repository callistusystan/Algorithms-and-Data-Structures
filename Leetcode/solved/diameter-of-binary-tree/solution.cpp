// https://leetcode.com/problems/diameter-of-binary-tree/

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
    int rec(TreeNode *root, int &ans) {
        if (root == NULL) return 0;
        int leftHeight = rec(root->left, ans), rightHeight = rec(root->right, ans);
        ans = max(ans, leftHeight+rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        rec(root, ans);
        return ans;
    }
};