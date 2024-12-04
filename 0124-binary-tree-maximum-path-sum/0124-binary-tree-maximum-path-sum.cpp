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
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        nodePath(root,maxi);
        return maxi;
    }
    
    int nodePath(TreeNode* node, int& maxi)
    {
        if(node == NULL) return 0;
        int lft = max(0,nodePath(node->left, maxi));
        int rgt = max(0,nodePath(node->right, maxi));
        maxi = max(maxi,lft+rgt+node->val);
        return max(lft,rgt) + node->val;
    }
};