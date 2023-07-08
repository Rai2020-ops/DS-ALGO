
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root, bool &flag)
    {
        if(root==NULL)
        return 0;
        int lh=height(root->left, flag); //recursive
        int rh=height(root->right, flag);
        if(abs(lh-rh)>1)
        {
            flag=false;
        }
        return 1+ max(lh,rh);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        bool flag=true;
        int h=height(root, flag);
        return flag;
    }
};
