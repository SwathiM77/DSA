#include <bits/stdc++.h>

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

Use new TreeNode(data) to create new Node
*/
class BinaryTreePreorderTraversal
{
public:
    void help(TreeNode* node, vector<int>& vec){
        if(node == NULL) return;
        vec.push_back(node->val);
        help(node->left,vec);
        help(node->right,vec);
    }
    // Implement your solution here
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            res.push_back(root->val);
            // st.pop();
            if(node->left != NULL){
                st.push(node->left);
                node->left = NULL;
            }
            else{
                st.pop();
                if(node->right!= NULL)
                    st.push(node->right);
            }
        }
        // help(root,res);
        return res;
    }
};
