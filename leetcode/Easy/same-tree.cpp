// Problem: Same Tree
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/same-tree/
// Solved on: 2026-10-23T13:21:55.404Z

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p== nullptr && q == nullptr) return 1;
        if(p == nullptr || q == nullptr){
            return 0;
        }
        if(p -> val != q -> val){
            return false;
        }
        return isSameTree(p -> left,q -> left) && isSameTree(p -> right,q -> right); 
        
    }
};