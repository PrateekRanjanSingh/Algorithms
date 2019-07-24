int tree(Node *node)
{
    if(node==NULL) return 0;
    int d = node->data;
    int l = tree(node->left);
    int r = tree(node->right);
    node->data = l + r;
    return d + node->data;
}
void toSumTree(Node *node)
{
    // Your code here
    tree(node);
}