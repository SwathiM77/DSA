// Definition for TreeNode
/*
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

bool isPresent(TreeNode* root,int val){
    if(!root)
        return false;
    if(root->val == val)
        return true;
    return (isPresent(root->left,val) || isPresent(root->right,val));
}

class CommonAncestor {
public:
    TreeNode* commonAncestor(TreeNode* root, TreeNode * p , TreeNode* q) {
        if(!root || !p || !q)
            return NULL;

        if(root->val == p->val && (isPresent(root->left,q->val) || isPresent(root->right,q->val)))
            return root;
        if(root->val == q->val && (isPresent(root->left,p->val) || isPresent(root->right,p->val)))
            return root;
        
        if(isPresent(root->left,p->val) && isPresent(root->right,q->val))
            return root;
        if(isPresent(root->left,q->val) && isPresent(root->right,p->val))
            return root;

        TreeNode* left = commonAncestor(root->left,p,q);
        TreeNode* right = commonAncestor(root->right,p,q);

        if(left)
            return left;
        return right;
    }
};


/*

class CommonAncestor {
public:
    TreeNode* commonAncestor(TreeNode* root, TreeNode * p , TreeNode* q) {
        if(!root || !p || !q)
            return NULL;

        if(root->val == p->val || root->val == q->val)
            return root;

        TreeNode* left = commonAncestor(root->left,p,q);
        TreeNode* right = commonAncestor(root->right,p,q);

        if(left && right)
            return root;
        
        return left?left:right;
    }
};
*/
