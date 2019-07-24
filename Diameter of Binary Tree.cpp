/* Computes the diameter of binary tree with given root.  */
int height(Node *node)
{
    if(node==NULL) return 0;
    return max(height(node->left),height(node->right)) + 1;
}
int diameter(Node* node)
{
   // Your code here
   if(node==NULL) return 0;
   int l = height(node->left);
   int r = height(node->right);
   int d = l+r+1;
   int ldia = diameter(node->left);
   int rdia = diameter(node->right);
   return max(d,max(ldia,rdia));
}