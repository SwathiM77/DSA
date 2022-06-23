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

void fillmap(TreeNode* root,int dist,int l,map<int,pair<int,int>>&map){
    if(!root)
        return;
    if(map.find(dist) == map.end() || map[dist].second > l){
        map[dist] = make_pair(root->val,l);
    }
    fillmap(root->left,dist-1,l+1,map);
    fillmap(root->right,dist+1,l+1,map);
}

vector<int> topViewBinaryTree(TreeNode* root) {
    vector<int> ans;
    if(!root)
        return ans;
    map<int,pair<int,int>>map;
    fillmap(root,0,0,map);
    for(auto itr=map.begin();itr!=map.end();itr++){
        ans.push_back(itr->second.first);
    }
    return ans;
}
