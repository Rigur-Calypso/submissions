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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        int rootHeight = 0;
        calculateDiameter(root,maxDiameter,rootHeight);
        return maxDiameter;
    }
    void calculateDiameter(TreeNode* node, int& maxDiameter, int& height){
        if(node == nullptr){
            height = 0;
            return;
        }
        int leftHeight = 0;
        int rightHeight = 0;
        calculateDiameter(node->left, maxDiameter, leftHeight);
        calculateDiameter(node->right, maxDiameter, rightHeight);
        maxDiameter = max(maxDiameter,leftHeight+rightHeight);
        height = 1+ max(leftHeight,rightHeight);
    }
};