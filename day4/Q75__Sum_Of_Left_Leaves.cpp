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

    void solve(TreeNode* &root, int &sum,bool lefter){
        if(root==NULL){
            return;
        }
       
        solve(root->left,sum,1);
        if(root->left==NULL && root->right==NULL && lefter){
            sum+=root->val;
            return;
        }
        solve(root->right,sum,0);

        return;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        
        solve(root,sum,false);
        return sum;
    }
};