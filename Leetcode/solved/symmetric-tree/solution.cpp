// https://leetcode.com/problems/symmetric-tree/description/

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
    bool check(TreeNode *a, TreeNode *b) {
        if (!a && !b) return true;
        else if ((a && !b) || (!a && b)) return false;
        return a->val == b->val && check(a->left, b->right) && check(a->right, b-> left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return !root || check(root->left, root->right);
    }
};