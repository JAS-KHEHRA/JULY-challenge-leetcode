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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      vector<vector<int>> v;
        if(!root) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> node;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                node.push_back(curr->val);
                if(curr->left)q.push(curr->left);       
                 if(curr->right)q.push(curr->right);
            }
            v.push_back(node);
        }
       reverse(v.begin(),v.end());
        return v;
        
        
    }
};
