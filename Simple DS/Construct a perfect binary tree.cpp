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
// TODO: Implement this method
TreeNode* perfectBinaryTree(int depth,int count){
    TreeNode* node = new TreeNode(count);
    if(count<depth){
        node->left = perfectBinaryTree(depth,count+1);
        node->right = perfectBinaryTree(depth,count+1);
    }
    return node;
}
TreeNode *perfectBinaryTree(int depth)
{
    return perfectBinaryTree(depth,0);
}
