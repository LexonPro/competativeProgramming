// Problem: Missing Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/missing-number/
// Solved on: 2026-10-27T15:26:18.526Z

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size();i++){
            if(i != nums[i]) {return i;}
        }
        return nums.size();
    }
};