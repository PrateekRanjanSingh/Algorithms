/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    int count = 0;
    Node *temp;
    for(temp = head;temp!=NULL;temp=temp->next)
    {
        count++;
    }
    int ar[count];
    temp = head;
    for(int i = 0;i<count;i++,temp=temp->next)
    {
        ar[i] = temp->data;
    }
    int i = 0,j=count-1;
    if(count==2 && ar[0]==ar[1]) return 1;
    else if(count==1) return 1;
    while(i<j)
    {
        if(ar[i]!=ar[j]) return 0;
        i++;
        j--;
    }
    return 1;
}