/*
Structure of the node of the binary search tree is as
struct node 
{
	int data;
	struct node* left;
	struct node* right;
};
*/
// your task is to complete the below function
int minValue(struct node* root)
{
    // Code here
    if(root->left==NULL) return root->data;
    return minValue(root->left);

}