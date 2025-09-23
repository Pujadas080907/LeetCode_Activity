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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        long long ans = 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        while(!q.empty()){
            long long n = q.size();
            long long minIdx = q.front().second;
            long long first, last;
            for(long long i=0; i<n; i++){
                TreeNode* node = q.front().first;
                long long  curIdx = q.front().second - minIdx;
                q.pop();
                if(i==0) first = curIdx;
                if(i==n-1) last = curIdx;
                if(node->left) q.push({node->left, 2*curIdx +1});
                if(node->right) q.push({node->right, 2*curIdx +2});

            }
            ans = max(ans, last - first + 1);
        }
        return ans;
    }
};