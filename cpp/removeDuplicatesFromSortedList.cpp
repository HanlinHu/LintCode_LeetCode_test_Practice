/*
* name : Remove Duplicates From Sorted List
*
* description: 
* Given a sorted linked list, delete all duplicates such that each element appear only once.
*
* example:
* Given 1->1->2, return 1->2.
* Given 1->1->2->3->3, return 1->2->3.
*
*/

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
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head)
    {
        // write your code here
    
        //special case(s):
        //1. input is null (can be first node or last node);
        //2. multi duplicates; 
        
        ListNode *current(nullptr), *del(nullptr), *temp(nullptr);
        
        current = head;
        
        //traverse to the last element
        while(current!= nullptr)
        {
            // split current = current->next;
            temp = current->next;
            while(((current->next)!=nullptr)&&((current->next->val) == (current->val)))
            {
                del = current->next;
                current->next = current->next->next;
                delete del;
            }
            current = temp;
        }
        return head;
    }
};
