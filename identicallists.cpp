/*
Structure of the node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
// return true if two list are identical else return false
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    if(head1==NULL && head2==NULL) return true;
    if(head1==NULL || head2==NULL) return false;
    return(head1->data==head2->data && areIdentical(head1->left,head2->left)
    && (areIdentical(head1->right,head2->right))
    );
}