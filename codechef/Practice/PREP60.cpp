// Problem: PREP60
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/stacks-and-queues-new/STACKQUE07/problems/PREP60
// Solved on: 2026-10-18T10:56:03.797Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    vector<int> temp;
	    for(int i = 0 ; i < n ; i++){
	        cin >> arr[i];   
	    }
	    
	    for(int i = 0 ; i < n ; i++){
	        int smaller = -1;
	        for(int j = i-1; j >= 0 ; j--){
	            if(arr[j] < arr[i]){
	                smaller = arr[j];

	                break;
	            }
	           
	        }
	        temp.push_back(smaller);
	    }
	    
	    for(int i = 0; i < n ; i++){
	        cout << temp[i] << " ";
	    }
	    cout << "\n";
	}

}
