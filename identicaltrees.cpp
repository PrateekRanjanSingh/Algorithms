/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *head1, Node *head2)
{
    //Your Code here
    if(head1==NULL && head2==NULL) return true;
    if(head1==NULL || head2==NULL) return false;
    return(head1->data==head2->data && isIdentical(head1->left,head2->left)
    && (isIdentical(head1->right,head2->right))
    );
}