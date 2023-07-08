class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        if(root==NULL)
        return 0;
        int left=height(root->left);
        int right=height(root->right);
        if(height(left)-height(right)<=1)
        return 
    }
};