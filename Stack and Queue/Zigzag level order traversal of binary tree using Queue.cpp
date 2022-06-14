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
class BinaryTreeZigzagLevelOrderTraversal {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>res;
        int levelNo=0;
        while(!q.empty()){
            int n = q.size();
            vector<int>level;
            while(n--){
                TreeNode* ele = q.front();
                level.push_back(ele->val);
                q.pop();
                if(ele->left)   q.push(ele->left);
                if(ele->right)  q.push(ele->right);
            }
            if(levelNo%2){
                int i=0,j=level.size()-1;
                while(i<j){
                    swap(level[i++],level[j--]);
                }
            }
            res.push_back(level);
            levelNo++;
        }
        return res;
        levelNo++;
    }
};
