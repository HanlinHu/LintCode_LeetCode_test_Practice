/*
* name: Minimum Depth of Binary Tree
*
* description: 
* Given a binary tree, find its minimum depth.
* The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*
* example:
*
* Given a binary tree as follow:
*
*      1
*     / \ 
*    2   3
*       / \
*      4   5  
*
* The minimum depth is 2
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
    int minDepth(TreeNode *root) 
    {
        // write your code here
        if(root==nullptr)
        return 0;
        
        if((root->left!=nullptr)&&(root->right!=nullptr))
        return min(minDepth(root->right), minDepth(root->left)) +1;
        else
        return max(minDepth(root->right), minDepth(root->left)) +1;
    }
};
