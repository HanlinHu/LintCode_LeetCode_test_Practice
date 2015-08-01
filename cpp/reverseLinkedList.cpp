/*
*  name: reverse linked list
*  Example:
*  For linked list 1->2->3, the reversed linked list is 3->2->1
*  Challenge:
*  Reverse it in-place and in one-pass
*/

/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
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
     * @return: The new head of reversed linked list.
     */
    ListNode *reverse(ListNode *head) 
    {
    
        //special case head == nullptr;
        
        ListNode *current(head);
        ListNode *newHead(nullptr);
        ListNode *temp(nullptr);
        if(head!=nullptr)
        {
            while(current != nullptr)
            {
                temp = current->next;
                current->next = newHead;
                newHead = current;
                current = temp;
            }
            return newHead;
        }
        else
        return nullptr;
    }
};
