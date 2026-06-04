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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new TreeNode(val);
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode*cur=q.front();
            q.pop();
            if(val<cur->val){
                if(cur->left==NULL){
                    cur->left=new TreeNode(val);
                    return root;
                }
                // if(cur->left!=NULL){
                q.push(cur->left);
                
            }
            else{
                if(cur->right==NULL){
                    cur->right=new TreeNode(val);
                    return root;
                }
    
                q.push(cur->right);
            }
        }



    }
};