/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
// function should print the nodes at k distance from root
void func(Node *root, int k, int n)
{
    if(root==NULL) return;
    if(k==n) cout << root->data << " ";
    func(root->left,k,n+1);
    func(root->right,k,n+1);
}
void printKdistance(Node *root, int k)
{
  // Your code here
  func(root,k,0);
}