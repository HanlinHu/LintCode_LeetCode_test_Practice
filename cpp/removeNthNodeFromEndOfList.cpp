/*
*
* name: Remove Nth Node From End of List
*
* description:
* Given a linked list, remove the nth node from the end of list and return its head.
*
* example:
* Given linked list: 1->2->3->4->5->null, and n = 2.
* After removing the second node from the end, the linked list becomes 1->2->3->5->null.
*
* note:
* The minimum number of nodes in list is n.
*
* challenge:
* O(n) time
*
*/

// Time O(n)

/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // write your code here
        
        //two pointers
        //special case:
        //n>= length of list
        
        ListNode *first(nullptr), *second(nullptr), *del(nullptr);
        int count(0);
        
        first = head;
        second = head;
        while(count<n)
        {
            first = first->next;
            ++count;
        }
        if(first != nullptr)
        {
           while(first->next!=nullptr)
            {
                second = second->next;
                first = first->next;
            }
        
            del = second->next;
            second->next = second->next->next;
            delete del;
        
            return head;
        }
        else
            return second->next;
    }
};
