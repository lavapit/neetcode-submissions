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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        queue<TreeNode*> qu;
        qu.push(root);
        if((p->val<root->val && q->val>root->val) || (p->val>root->val && q->val<root->val)){
            return root;
        }
        while(!qu.empty()){
            TreeNode* cur=qu.front();
            qu.pop();
            if((p->val<cur->val) && (q->val<cur->val)){
                qu.push(cur->left);
            }
            else if((p->val>cur->val) && (q->val>cur->val)){
                qu.push(cur->right);
            }
            else{
                return cur;
            }
        }

    //     map<int,int> m;
    //     while(!qu.empty()){
    //         TreeNode* cur=qu.front();
    //         qu.pop();
    //         if(cur->left!=NULL){
    //             qu.push(cur->left);
    //             m.insert({cur->left->val,cur->val});
    //         }
    //         if(cur->right!=NULL){
    //             qu.push(cur->right);
    //             m.insert({cur->right->val,cur->val});
    //         }
    //     }
    //     for (auto& p : m){
    //     cout << p.first << " " << p.second << endl;
    // }
    // if(((p->val<root->val) && (q->val<root->val)) || ((p->val>root->val) && (q->val>root->val))){
    //     auto it=m.find(p->val)
    //     if(it!=m.end()){
    //         int x=it->second;
    //     }
    //     auto itt=m.find(q->val)
    //     if(itt!=m.end()){
    //         int y=it->second;
    //     }

    // }
    
     
    }
};
