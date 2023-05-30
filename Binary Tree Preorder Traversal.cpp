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
          void pre_order(vector<int>&pre ,TreeNode* root){
              if(root ==NULL){
                  return;
              }
              pre.push_back(root->val);
              pre_order(pre,root->left);
              pre_order(pre,root->right);
          }
    vector<int> preorderTraversal(TreeNode* root) {
           vector<int>preoder;
          pre_order(preoder,root);
          return preoder;
    }
};
