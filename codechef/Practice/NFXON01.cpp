// Problem: NFXON01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/stacks-and-queues-new/STACKQUE07/problems/NFXON01
// Solved on: 2026-10-20T16:27:40.151Z

vector<int> findNextGreaterElements(vector<int>& numbers) {
    int n = numbers.size();
    vector<int> ans(n,-1);
    for(int i = 0 ; i < n; i++){
        for(int j = 1; j < n ; j++){
            int k = (i+j) % n;
            if(numbers[i] < numbers[k]){
                ans[i] = numbers[k];
                break;
            }
        }
    }
    return ans;
    
}