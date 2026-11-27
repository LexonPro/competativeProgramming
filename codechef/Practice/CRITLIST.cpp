// Problem: CRITLIST
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/CRITLIST
// Solved on: 2026-11-27T05:36:58.162Z

/*
Node is defined as:
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
      this->data = data;
      this->next = nullptr;
  }
}
*/
int solve(Node* head){
    if(head == nullptr || head -> next == nullptr) return 0;
    Node* prev = head;
    Node* curr = head -> next;
    int count = 0;
    while(curr -> next != nullptr){
        
        if((prev -> data > curr -> data && curr -> next -> data > curr -> data) || (prev -> data < curr -> data && curr -> next -> data < curr -> data)){
            count++;
        }
        prev = curr;
        curr = curr -> next;
    }
    return count;
}