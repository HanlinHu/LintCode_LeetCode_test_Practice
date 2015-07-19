/**
 * problem: Invert a binary tree
 *       1         1
 *      / \       / \
 *     2   3  => 3   2
 *        /       \
 *       4         4
 * 
 * Challenge
 * Do it in recursion is acceptable, can you do it without recursion?
 * 
 * 
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
     * @param root: a TreeNode, the root of the binary tree
     * @return: nothing
     */
    void invertBinaryTree(TreeNode *root) {
        // write your code here
        TreeNode *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        if(root->left != nullptr)
            invertBinaryTree(root->left);
        if(root->right != nullptr)
            invertBinaryTree(root->right);    
    }
};
