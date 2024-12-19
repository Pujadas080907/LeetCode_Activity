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
  
        void deleteNode(ListNode* node) {
        node->val = node->next->val;   // it will replace the value with next node
        node->next = node->next->next; 
      
}

    
};