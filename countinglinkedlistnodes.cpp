/*Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/
// head : reference to head of linked list
int getCount(struct node* head){
//Code here
int count = 0;
struct node *temp;
for(temp = head;temp!=NULL;temp=temp->next)
{
    count++;
}
return count;
}
