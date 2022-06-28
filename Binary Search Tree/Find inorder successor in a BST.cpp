/*
// Definition for TreeNode
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
*/
class Solution {
    public:
    void inorder(TreeNode* root,vector<TreeNode*>&ans){
        if(!root)
            return;
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }

    TreeNode * inOrderSuccessor(TreeNode *root, TreeNode *givenNode) 
    {
        if(!root || !givenNode)
            return root;
            
        vector<TreeNode*>ans;
        TreeNode* res = NULL;
        int ind = 0;
        inorder(root,ans);
        int n = ans.size();
    
        for(int i=0;i<n;i++){
            if(ans[i]->val == givenNode->val){
                if(i == n-1)
                    ind = -1;
                else
                    ind = i+1;
                break;
            }
        }
        if(ind == -1)
            return res; 
        res = ans[ind];
        return res;
    } 
};
