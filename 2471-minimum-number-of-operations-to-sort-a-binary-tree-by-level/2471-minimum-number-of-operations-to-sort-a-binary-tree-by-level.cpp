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
    // Constants for bit manipulation
    const int SHIFT = 20;
    const int MASK = 0xFFFFF;

public:
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> queue;
        queue.push(root);
        int swaps = 0;

       
        while (!queue.empty()) {
            int levelSize = queue.size();
            vector<long long> nodes(levelSize);

           
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = queue.front();
                queue.pop();
              
                nodes[i] = (static_cast<long long>(node->val) << SHIFT) + i;

                if (node->left != nullptr) queue.push(node->left);
                if (node->right != nullptr) queue.push(node->right);
            }

           
            sort(nodes.begin(), nodes.end());

           
            for (int i = 0; i < levelSize; i++) {
                int origPos = static_cast<int>(nodes[i] & MASK);
                if (origPos != i) {
                
                    swap(nodes[i], nodes[origPos]);
                    swaps++;
                    i--;
                }
            }
        }
        return swaps;
    }
};