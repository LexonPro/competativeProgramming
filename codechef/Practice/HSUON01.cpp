// Problem: HSUON01
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/stacks-and-queues-new/STACKQUE07/problems/HSUON01
// Solved on: 2026-10-18T12:41:51.593Z

vector<int> findNextGreaterElement(vector<int>& subsetNumbers, vector<int>& fullNumbers) {
    vector<int> temp;
    for(int i = 0 ; i < subsetNumbers.size();i++){
        int greater = -1;
        int index = 0;
        while(index < fullNumbers.size() && subsetNumbers[i] != fullNumbers[index]){
            index++;
        }
        if(index == fullNumbers.size()){
            temp.push_back(-1);
            continue;
        }
        for(int j = index+1; j < fullNumbers.size(); j++){
            if(fullNumbers[j] > subsetNumbers[i]){
                greater = fullNumbers[j];
                break;
            }
        }
        temp.push_back(greater);
    }
    return temp;
    
}