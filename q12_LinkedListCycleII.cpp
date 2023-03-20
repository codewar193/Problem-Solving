/*

 Linked List Cycle II
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.
Example 1:
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
*/

/*
class Solution {
public:


    ListNode* findMeetPoint(ListNode *head){
     ListNode* slow= head;
        ListNode* fast= head;


        while(fast!=NULL && slow!=NULL){
            slow= slow->next;
            if(!fast->next) return NULL;
            fast = fast->next->next;
            if(fast==slow){
                return fast;
            }

        }
    return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* meet = findMeetPoint(head);
        ListNode* start = head;
        while(start!=meet){
            start=start->next;
             if(!meet) return NULL;
            meet=meet->next;
             
        }
  return start;
    }
};

*/
