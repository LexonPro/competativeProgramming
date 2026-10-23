// Problem: Symmetric Tree
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/symmetric-tree/
// Solved on: 2026-10-23T13:47:12.512Z

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
    bool isMirror(TreeNode* l,TreeNode* r){
        if(l == nullptr && r == nullptr){
            return 1;
        }
        if(l == nullptr || r == nullptr){
            return 0;
        }
        if(l -> val != r -> val){
            return false;
        }
        return isMirror(l -> left , r -> right) && isMirror(r -> left , l -> right);
    }
    bool isSymmetric(TreeNode* root) {
       if(root == nullptr) return 1;
        return isMirror(root -> left,root -> right);
    }
};