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
    int ans = 0;
    vector<int> dfs(TreeNode* node, int sum, int cnt){
        if(!node) return {0,0};

        vector<int> left = dfs(node->left,sum,cnt);
        vector<int> right = dfs(node->right,sum,cnt);

        int l = left[0], lcnt = left[1], r = right[0], rcnt = right[1];

        if((l + r + node->val)/(lcnt+rcnt+1) == node->val) ans++;
        return {(l + r + node->val), lcnt+rcnt+1};
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        vector<int> x = dfs(root, 0, cnt);
        return ans;
    }
};