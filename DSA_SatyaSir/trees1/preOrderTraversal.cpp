https://leetcode.com/problems/binary-tree-preorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> pre;
    vector<int> preorderTraversal(TreeNode* root){
        if(root == NULL) return pre;
        else{
            pre.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }     
        return pre;
    }
};
