// Problem: PREP55
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/PREP55
// Solved on: 2026-11-27T05:17:40.167Z

/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        Node* curr = head;
        if(head == nullptr) return head;
        
        while(curr -> next != nullptr){
            if(curr -> data == curr -> next -> data){
                Node* temp = curr -> next;
                curr ->next = curr -> next -> next;
                delete temp;
            }
            else curr = curr -> next;
        }
        return head;
    }
};