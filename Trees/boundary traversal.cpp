class Solution {
public:
  void traversalLeft(Node *root,vector<int>&v){
      if(root==NULL||(root->left==NULL&& root->right==NULL) ){
            return;
      }
      v.push_back(root->data);
      if(root->left){
      traversalLeft(root->left,v);
      }
      else
      traversalLeft(root->right,v);
  }
  
  void traversalLeaf(Node *root,vector<int>&v){
  if(root==NULL){
      return;
  }
  
  if(root->left==NULL&& root->right==NULL ){
            v.push_back(root->data);
            return;
      }
   traversalLeaf(root->left,v);
  traversalLeaf(root->right,v);
  
  }
  
  void traversalRight(Node *root,vector<int>&v){
      if(root==NULL||(root->left==NULL&& root->right==NULL) ){
            return;
      }
      
      if(root->right){
     
      traversalRight(root->right,v);
  }
  else traversalRight(root->left,v);
   
   v.push_back(root->data);
  }
  
  vector <int> boundary(Node *root)
    {
        vector<int>v;
         if(root==NULL){
      return v;
  }
  v.push_back(root->data);
  
   traversalLeft(root->left,v);  
   traversalLeaf(root->left,v);
   traversalLeaf(root->right,v);
     traversalRight(root->right,v);
     return v;
    }
};