// struct TreeNode {
//      int val;
//       TreeNode *left;
//      TreeNode *right;
//     TreeNode(int x){
//         data=x;
//         left=right=NULL;
//     }
//   };
  void inorder(TreeNode* node, vector<int>& tree){
    if(node==nullptr){
        return;
    }
    inorder(node->left,tree);
    tree.push_back(node->val);
    inorder(node->right,tree);
  }
 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> tree;
        inorder(root,tree);
        return tree;
        
    }
};