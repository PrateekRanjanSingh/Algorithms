struct Node
{
   int data;
   struct Node* next;
};
// your task is to complete this function 
int countPairs(struct Node* head1, struct Node* head2,	int x)
{
      //Code here
      Node *temp1 = head1;
      Node *temp2 = head2;
      int count = 0;
      for(temp1 = head1;temp1!=NULL;temp1=temp1->next)
      {
          for(temp2 = head2;temp2!=NULL;temp2=temp2->next)
          {
              if(temp1->data+temp2->data==x) count++;
          }
      }
      return count;
}