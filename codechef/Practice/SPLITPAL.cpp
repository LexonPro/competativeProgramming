// Problem: SPLITPAL
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/stacks-and-queues-new/STACKQUE07/problems/SPLITPAL
// Solved on: 2026-10-22T07:56:52.138Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    int l = 0;
	    int r = n-1;
	    int c = 0;
	    while(l < r){
	        if(arr[r]==arr[l]){
	            l++;
	            r--;
	        }
	        else if(arr[l] > arr[r]){
	           
	            arr[l] -= arr[r];
	           r--;
	           c++;
	            
	        }
	        else{
	          
	            arr[r] -= arr[l];
	            l++ ;
	            c++;
	        }
	    }
	    cout << c << "\n";
	}
return 0;
}
