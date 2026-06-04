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
    inorder(node->right,tree);
    tree.push_back(node->val);
  }
 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> tree;
        inorder(root,tree);
        return tree;
        
    }
};