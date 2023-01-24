/*
Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a 
height-balanced
 binary search tree.
Example 1:
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

*/

/*
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
 *//*
class Solution {
public:

   TreeNode* BST(vector<int>& nums,int s,int e)
   {
        if(s > e)
            return NULL;
        
        int mid = (s+e)/2;
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = BST( nums,s , mid-1);
        root->right = BST( nums,mid+1 , e );
        
        return root;
   }

   
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
      int start = 0;
      int end = nums.size()-1;
      TreeNode *root = new TreeNode();
      
    root =BST(nums,start,end);
  return root;
      
    }
};




*/