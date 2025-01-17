/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* curr=root;
        vector<int>res;
        stack<TreeNode*>stck;
        while(curr!=nullptr || !stck.empty()){
            if(curr!=nullptr){
                stck.push(curr);
                res.push_back(curr->val);
                curr=curr->left;
            }
            else{
                curr=stck.top();
                stck.pop();
                curr=curr->right;
            }
        }
        return res;
    }
};