
/*
Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/

/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*temp,*curr;

        curr =head;
        prev =NULL;

        while(curr){
            temp =curr->next;
            curr->next = prev;
            prev=curr;
            curr=temp;

        }
        return prev;
    }
};

*/
