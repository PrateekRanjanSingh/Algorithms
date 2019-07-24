int pathSum(struct Node *root)
{
    if(root==NULL) return 0;
    int lsum = root->data + pathSum(root->left);
    int rsum = root->data + pathSum(root->right);
    return max(lsum,rsum);
}

int maxPathSum(struct Node *root)
{
//add code here.
if(root==NULL) return 0;

int l = pathSum(root->left);
int r = pathSum(root->right);
int d = l+r+root->data;

int lsm = maxPathSum(root->left);
int rsm = maxPathSum(root->right);

return max(d,max(lsm,rsm));
    
}