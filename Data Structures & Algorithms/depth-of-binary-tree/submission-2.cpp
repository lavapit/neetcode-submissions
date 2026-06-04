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
    int maxDepth(TreeNode* root) {
        queue <TreeNode*> q;
        if(root==NULL){
            return 0;
        }
        q.push(root);
        int count=0;
        while(!q.empty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left!=NULL){
                    q.push(cur->left);
                }
                if(cur->right!=NULL){
                    q.push(cur->right);
                }

            }
            count++;
        }
        return count;
    }
};