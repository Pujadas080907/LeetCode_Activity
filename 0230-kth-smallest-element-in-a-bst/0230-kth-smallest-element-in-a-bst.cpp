class Solution {
private:
    void inorder(TreeNode* root, int &cnt, int k, int &ks) {
        if (!root || cnt >= k) {
            return;
        }
        inorder(root->left, cnt, k, ks);
        cnt++;
        if (cnt == k) {
            ks = root->val;
            return;
        }
        inorder(root->right, cnt, k, ks);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        int ks = INT_MIN;
        int cnt = 0;
        inorder(root, cnt, k, ks);
        return ks;
    }
};
