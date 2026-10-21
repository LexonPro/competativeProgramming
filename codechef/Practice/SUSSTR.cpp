// Problem: SUSSTR
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/stacks-and-queues-new/STACKQUE07/problems/SUSSTR
// Solved on: 2026-10-21T08:35:59.147Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int alice = 0;
	    int bob = n-1;
	    string t = "";
	        while (alice <= bob) {
          
            if (s[alice] == '0') {
                t.insert(0, 1, '0');
            } else {
                t.push_back('1');
            }
            alice++;

            if (alice <= bob) {
                if (s[bob] == '1') {
                    t.insert(0, 1, '1');
                } else {
                    t.push_back('0');
                }
                bob--;
            }
        }

	    cout << t << "\n";
	    
	}
	return 0;

}
