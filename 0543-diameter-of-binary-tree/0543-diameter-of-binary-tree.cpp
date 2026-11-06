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
 int diameter(TreeNode* node,int &maxi){
        int lh=0,rh=0;// always intilaise with zero vrna vo koi bhi aise random values le lenge 
        if(node==NULL)return 0;
        if(node->left!=NULL) lh=diameter(node->left,maxi);
        if(node->right!=NULL) rh=diameter(node->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
}
class Solution {
public: 
    int diameterOfBinaryTree(TreeNode* root) {
       int  maxi=0;
      diameter(root,maxi);
      return maxi;
    }
};