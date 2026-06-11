/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
 struct ListNode* dummy=malloc(sizeof(struct ListNode));
  dummy->val=0;
   dummy ->next=head;
   struct ListNode* prev=dummy;

   while(prev->next && prev->next->next){
    struct ListNode* first=prev->next;
    struct ListNode* second=prev->next->next;
    //swap
    first->next = second->next;
    
    second->next = first;
        prev->next = second;


    prev=first;
    }

    head=dummy->next;
    return head;}

   







    
