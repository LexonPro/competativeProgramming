// Problem: Invert Binary Tree
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/invert-binary-tree/
// Solved on: 2026-10-23T13:33:13.373Z

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
    
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        std::swap(root -> left , root -> right);
        invertTree(root -> left);
        invertTree(root -> right);
        return root;
    }
};