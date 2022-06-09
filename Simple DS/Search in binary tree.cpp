#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"

/*
//Definition of TreeNode
class TreeNode {

public:
    long val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {}

    TreeNode (long x) {
    val = x;
    left = NULL;
    right = NULL;
  }
};

Use new TreeNode(data) to create new Node
*/

class BinaryTreeLevelOrderTraversal
{
public:
    int height(TreeNode* node){
      if(node == NULL)
       return 0;
      int l = height(node->left);
      int r = height(node->right);
      return l>r?l+1:r+1;
    }
    void getCurrLevel(TreeNode* node,int i,vector<int>&v){
      if(node == NULL)  return;
      if(i==1)  v.push_back(node->val);
      else if(i>1){
        getCurrLevel(node->left,i-1,v);
        getCurrLevel(node->right,i-1,v);
      }
    } 
    vector<vector<int>> binaryTreeLevelOrderTraversal(TreeNode *root)
    {
      vector<vector<int>>res;
      int h = height(root);
      for(int i=1;i<=h;i++){
        vector<int>v;
        getCurrLevel(root,i,v);
        res.push_back(v);
      }
      return res;
    }
};
