#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"

/*
Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
}

Use new TreeNode(data) to create new Node
*/

void inorder(TreeNode* root,vector<int>&arr){
    if(!root){
        return ;
    }
    
    inorder(root->left,arr);
    arr.push_back(root->val);
    inorder(root->right,arr);

}

TreeNode* buildTree(vector<int>&arr,int i,int j){
   int mid = (i+j)/2;
    if(i>j)
    return NULL;
   TreeNode* root = new TreeNode(arr[mid]);
   root->left =  buildTree(arr,i,mid-1);
   root->right = buildTree(arr,mid+1,j);
   return root;
}

TreeNode* balanceBST(TreeNode* root) {
    vector<int>arr;
    inorder(root,arr);
    int i=0,j=arr.size()-1;
    return buildTree(arr,i,j);
}
