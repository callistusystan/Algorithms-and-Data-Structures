// https://leetcode.com/problems/subtree-of-another-tree/

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
    bool isSame(TreeNode *a, TreeNode *b) {
        if (a == NULL && b == NULL) return true;
        else if ((a && !b) || (!a && b)) return false;
        return a->val == b->val 
            && isSame(a->left, b->left) 
            && isSame(a->right, b->right);
    }    
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (s == NULL) return t == NULL;
        return isSame(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};