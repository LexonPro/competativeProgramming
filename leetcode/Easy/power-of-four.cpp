// Problem: Power of Four
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/power-of-four/
// Solved on: 2026-10-27T15:41:12.006Z

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)return 0;
        while(n % 4 == 0) n /= 4;
        return (n==1);
    }
};