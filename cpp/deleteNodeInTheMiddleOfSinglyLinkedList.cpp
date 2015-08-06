/*
* name: Delete Node in the Middle of Singly Linked List
*
* description: 
* Implement an algorithm to delete a node in the middle of a singly linked list, given only access to that node.
*
* example:
* Given 1->2->3->4, and node 3. return 1->2->4
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
     * @param node: a node in the list should be deleted
     * @return: nothing
     */
    void deleteNode(ListNode *node)
    {
        // write your code here
        
        ListNode *del(nullptr);
        
        // if input the node is not existed in the list or if input is not in the middle(that means we cannot use cover strategy)
        
        if (node == nullptr || node->next == nullptr) 
            return;
            
        // we cannot manipulate previous node, so delete current node is a stupid choice
        // but we can copy the val of next into the current val as the cover first, 
        // then link the current with next->next,
        // finally delete the next of current one
        // here is our strategy:
        
        del = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        
        delete del;
    }
};
