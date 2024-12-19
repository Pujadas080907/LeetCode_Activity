/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL &&  fast->next != NULL)
        {
                 slow = slow->next;
                 fast = fast->next->next;
                 if(slow == fast)
                 {
                          break;
                 }
         }
         // Check if no cycle was detected
        if (fast == NULL || fast->next == NULL) return NULL;

         ListNode * temp = head;
         while(temp != slow)
         {
                 temp = temp->next;
                 slow = slow->next;
          }
         return slow;
        
    }
};