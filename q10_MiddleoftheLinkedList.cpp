
/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
Example 1:
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*/

/*class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0,i=0;

        while(temp){
        temp=temp->next;
        count++;
        }
        temp =head;
         int n = count/2;
         while(i<n){
             temp=temp->next;
             i++;
         }
         return temp;
    }
};*/
