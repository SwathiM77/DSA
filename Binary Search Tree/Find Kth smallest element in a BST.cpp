#include "../crio/cpp/ds/TreeNode/TreeNode.hpp"


/*
// Definition for TreeNode
class TreeNode {
public:
    long val;
    TreeNode* left;
    TreeNode* right;
    TreeNode (long x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
*/
void inorder(TreeNode* root,int &count,int k,int &ans){
    if(!root){
        return ;
    }
    
    inorder(root->left,count,k,ans);
    count++;
    if(count == k)
        ans = root->val;
    inorder(root->right,count,k,ans);

}

int kthSmallestElementInABst(TreeNode* root, int k) {
    int count = 0;
    int ans = -1;
    inorder(root,count,k,ans);
    return ans;
}
