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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue <TreeNode*> st;
        queue <TreeNode*> stt;
        st.push(p);
        stt.push(q); 
        // cout<<st.front()->val<<" "<<stt.front()->val<<endl;
        while(!st.empty() && !stt.empty()){
            TreeNode* cur=st.front();
            TreeNode* curr=stt.front();
            // cout<<cur->val<<" "<<curr->val<<endl;
            // if(cur==NULL && curr==NULL){
            //     continue;
            // }

            st.pop();
            stt.pop();
            if(cur==nullptr && curr==nullptr){
                continue;
            }
            if(cur==nullptr || curr==nullptr || cur->val!=curr->val){

                return false;
            }
            // if(cur==nullptr && curr==nullptr){
            //     continue;
            // }
            // st.pop();
            // stt.pop();
            // if(cur->left!=nullptr ){
                st.push(cur->left);
            
            // if(cur->right!=nullptr ){
                st.push(cur->right);
            
            // if(cur->left==nullptr){
            //     st.push(NULL);
            // }
            // if(cur->right==nullptr){
            //     st.push(NULL);
            // }

            // if(curr->left!=nullptr){
                stt.push(curr->left);
           
        //    if(curr->left!=nullptr){
                stt.push(curr->right);
           
        //    if(curr->right==nullptr){
        //         stt.push(NULL);
        //    }
        //     if(curr->right==nullptr){
        //         stt.push(NULL);
        //    }
        }
        return true;
    }
};
