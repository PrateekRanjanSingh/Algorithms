/*
  Return the no. of times search_for data is there in a linked list.
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
int count(struct node* head, int search_for)
{
//add your code here
struct node *temp;
int count = 0;
for(temp = head;temp!=NULL;temp=temp->next)
{
    if(temp->data==search_for)
    {
        count++;
    }
}
return count;
}