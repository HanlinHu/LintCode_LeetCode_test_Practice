
/*
* Name: Nth to Last Node in List
*
* Description:
*   Find the nth to last element of a singly linked list. 
*   The minimum number of nodes in list is n.
*  
* Example:
* Given a List  3->2->1->5->null and n = 2, return node  whose value is 1.
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
     * @param n: An integer.
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) 
    {
        // write your code here
        
        //special case(s):
        //1: head == nullptr;
        //2: n < 0
        //3: n > length of the list
        
        // two pointers: one point to the last while one point to the Nth to the last
        //current is the pointer traversed to the last; nth is the pointer go to the nth to the last node
        
        ListNode *current(nullptr), *nth(nullptr);
        int count(0), mark(0);
        
        if(n < 0)
            return nullptr;
        else
        {
            if(head == nullptr)
                return nullptr;
            else
            {
                current = head;
                nth = head;
                while(current!=nullptr)
                {
                    current = current->next;
                    ++count;
                }
                if(n>count)
                    return nullptr;
                else
                {
                    mark = count - n;
                    for(int i=0; i<mark; i++)
                    {
                        nth = nth->next;
                    }
                    return nth;   
                }
            }
        }
    }
};
