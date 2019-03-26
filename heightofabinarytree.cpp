/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/* Computes the height of binary tree with given root.  */

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}

int height(Node* node)
{
   // Your code here
   if(node==NULL) return 0;
   return max(height(node->left),height(node->right)) + 1;
}