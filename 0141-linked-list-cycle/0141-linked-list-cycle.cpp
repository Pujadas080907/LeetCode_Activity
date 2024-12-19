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
    bool hasCycle(ListNode *head) {
            ListNode* slow = head;
            ListNode* fast = head;
            if(head == NULL) return false;
            if(head->next ==NULL) return false;
            while(fast != NULL) // loop ends means that there exist no cycle
            {
                    if(slow->next == NULL) return false;
                    slow = slow->next;
                    if(fast->next == NULL) return false;
                    fast = fast->next->next;
                    if(fast == slow)  // It means there exist a cycle because slow and fast meet together after a point
                    {
                            return true;
                    }
            }
            return false;
 
    }
};