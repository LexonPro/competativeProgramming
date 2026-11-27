// Problem: LLMID
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/LLMID
// Solved on: 2026-11-27T05:51:20.965Z

/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
        
    }
    return slow -> val;
}
