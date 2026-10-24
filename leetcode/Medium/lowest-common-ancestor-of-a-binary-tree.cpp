// Problem: Lowest Common Ancestor of a Binary Tree
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// Solved on: 2026-10-24T05:10:56.491Z

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || p == root || q== root) return root;

        TreeNode* left = lowestCommonAncestor(root -> left,p,q);
        TreeNode* right = lowestCommonAncestor(root -> right,p,q);

        if(left == nullptr) return right;
        else if(right == nullptr) return left;
        else return root;
    }
};