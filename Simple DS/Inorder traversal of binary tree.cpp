#include<bits/stdc++.h>

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
class BinaryTreeInorderTraversal {
public:
    void help(TreeNode* node, vector<int>&  vec){
        if(node == NULL)
            return;
        help(node->left,vec);
        vec.push_back(node->val);
        help(node->right,vec);
    }
    // Implement your solution here
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        // stack<TreeNode*> st;
        // st.push(root);
        // while( !st.empty() ){
        //     TreeNode* node = st.top();
        //     if(node->left != NULL){
        //         st.push(node->left);
        //         node->left = NULL;
        //     }
        //     else{
        //         inOrder.push_back(node->val);
        //         st.pop();
        //         if(node->right != NULL){
        //             st.push(node->right);
        //         }
        //     }
        // }
        help(root,inOrder);
        return inOrder;
    }
};
