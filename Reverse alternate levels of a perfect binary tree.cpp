void reverse(Node *root1,Node *root2,int f)
{
    if(root1==NULL || root2==NULL) return;
    if(f%2==0) swap(root1->data,root2->data);
    
    reverse(root1->left,root2->right,f+1);
    reverse(root1->right,root2->left,f+1);
}

void reverseAlternate(Node *root)
{
    //Your code here
    if(root==NULL) return;
    reverse(root->left,root->right,0);
}