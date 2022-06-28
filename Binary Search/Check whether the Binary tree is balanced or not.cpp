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
class CheckBalanced {
public:
    bool checkHelper(TreeNode* root,int &height){
        
        int lefth = 0;
        int righth = 0;

        int l=0,r=0;
        if(root == NULL){
            height = 0;
            return true;
        }
        
        l = checkHelper(root->left,lefth);
        r = checkHelper(root->right,righth);

        height = 1+max(lefth,righth);

        if(abs(lefth-righth)>=2)
            return false;

        else
            return l && r;
    }
    bool checkBalanced(TreeNode *root)
    {
        int height = 0;
       return checkHelper(root,height);
    }
};
