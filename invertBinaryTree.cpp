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
        //swap the subNodes
        temp = root->left;
        root->left = root->right;
        root->right = temp;
        
        //do recusive job by calling recusive function
        if(root->left != nullptr)
            invertBinaryTree(root->left);
        if(root->right != nullptr)
            invertBinaryTree(root->right);    
    }
};

/*
* Second solution
* by using stack for doing recursive job
*/
    void invertBinaryTree(TreeNode *root) 
    {
        // write your code here
        stack<TreeNode*> T;
        T.emplace(root);
        while(!T.empty())
        {
            //read top -- root-- and pop
            TreeNode* node = T.top();
            T.pop();
            
            TreeNode* temp;
            
            //swap subNodes
            temp = node->left;
            node->left = node->right;
            node->right = temp;
            
            //use stack for recusive job
            if(node->left != nullptr)
                T.emplace(node->left);
            if(node->right != nullptr)
                T.emplace(node->right);
        }
    }
