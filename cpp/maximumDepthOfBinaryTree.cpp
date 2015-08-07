/*
* name: Maximum Depth of Binary Tree
*
* description: 
* Given a binary tree, find its maximum depth.
* The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
* 
* example:
* Given a binary tree as follow:
*    1
*   / \ 
*  2   3
*     / \
*    4   5
*
* The maximum depth is 3.
*
*/

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */

    int maxDepth(TreeNode *root) 
    {
        // write your code here
        
        //recursion duty
        //special case: input is null
  
    if (root==nullptr)
    return 0;
    else
    return max(maxDepth(root->right), maxDepth(root->left))+1;
        
    }
};
