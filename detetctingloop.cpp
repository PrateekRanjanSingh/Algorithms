/*The structure of linked list is the following
struct node
{
int data;
node* next;
};*/
int detectloop(struct node *head){
// your code goes here
struct node *slow=head;
struct node *fast=head;
int f = 0;
while(slow && fast && fast->next)
{
    slow = slow->next;
    fast = fast->next->next;
    if(slow==fast)
    {
        f=1;
        break;
    }
}
return f;
}