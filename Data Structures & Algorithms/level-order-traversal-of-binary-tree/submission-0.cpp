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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode*> q;
        vector<vector<int>> v;
        q.push(root);
        while(!q.empty()){
            int l=q.size();
            vector<int> temp;
            for(int i=0;i<l;i++){
            TreeNode*cur=q.front();
            q.pop();
            temp.push_back(cur->val);
            if(cur->left!=NULL){
                q.push(cur->left);
            }
            if(cur->right!=NULL){
                q.push(cur->right);
            }

            }
            v.push_back(temp);
            
        }
        return v;
    }
};
