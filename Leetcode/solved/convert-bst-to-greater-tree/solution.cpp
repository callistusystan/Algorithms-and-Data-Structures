// https://leetcode.com/problems/convert-bst-to-greater-tree/description/

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
    
    TreeNode* toGreaterTree(TreeNode* root, int &sum) {
        if (!root) return NULL;        
        toGreaterTree(root->right, sum);
        root->val += sum;
        sum = root-> val;
        toGreaterTree(root->left, sum);
        return root;
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        return toGreaterTree(root, sum);
    }
};