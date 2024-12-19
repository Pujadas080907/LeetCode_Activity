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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenListA = 0; 
        int lenListB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != NULL)
        {
               lenListA++;
               tempA = tempA->next;
        }
        while(tempB != NULL)
        {
               lenListB++;
               tempB= tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(lenListA>lenListB)
        {
               int steps = lenListA - lenListB;
               for(int i=1; i<=steps; i++)
              {
                     tempA = tempA->next;
              }
        }else
        {
               int steps = lenListB - lenListA;
               for(int i=1; i<=steps; i++)
              {
                     tempB = tempB->next;
              }
        }
   
        while(tempA != tempB)
        {
               tempA = tempA->next;
               tempB = tempB->next;
        }
        return tempA;


    }
};