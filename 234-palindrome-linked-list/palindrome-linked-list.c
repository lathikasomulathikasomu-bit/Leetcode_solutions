/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

    struct ListNode *slow=head;
 struct ListNode *fast=head;
 while(fast && fast->next){
    slow=slow->next;
    fast=fast->next->next;
 }  
 struct ListNode* prev=NULL;
  struct ListNode* curr=slow;
  struct ListNode* next;

  while(curr){
    next=curr->next;
    curr->next=prev;

    prev=curr;
    curr=next;
  } 
  struct ListNode *first=head;
  struct ListNode *second=prev;
  while(second){
    if(first->val!=second->val){
        return false;
    }
    first=first->next;
    second=second->next;
  }
  return true;
}