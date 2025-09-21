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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> lvlOrder;
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> lvl;
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                lvl.push_back(node->val);
                if(node->right != NULL) q.push(node->right);
                if(node->left != NULL) q.push(node->left);
                
            }
            lvlOrder.push_back(lvl);
        }
        for(int i=0; i<lvlOrder.size(); i++){
               ans.push_back(lvlOrder[i][0]);
        }
        return ans;
        
    }
};