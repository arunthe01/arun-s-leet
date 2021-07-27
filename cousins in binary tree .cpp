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
int check(int &parent ,int height, TreeNode* root , int x){

    if( ! root )
        return 0;
    
    if(root->val == x)
        return height;
    
     parent = root->val;
    
   int left = check(parent , height+1 , root->left , x );
    
    if(left)
        return left;
    
    parent = root->val;
    
    int right = check(parent , height+1 , root->right , x );
    return right;
    
}

    bool isCousins(TreeNode* root, int x, int y) {    
        if(! root)
        return false;
        
    if(root->val == x ||root->val == y)
        return false;
        
      int xp = -1;
      int xh = check (xp ,0 , root  ,x );
        
      int yp = -1;
      int yh = check(yp,0,root,y);
        
        if(xh == yh && xp!=yp)
            return true;
        
        return false;
        
    }
};
