bool compare(int a, int b)
{
    return (a>b);
}
struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    Node *temp1, *temp2;
    vector<int> v1;
    for(temp1=node1;temp1!=NULL;temp1=temp1->next)
    {
        v1.push_back(temp1->data);
    }
    for(temp2=node2;temp2!=NULL;temp2=temp2->next)
    {
        v1.push_back(temp2->data);
    }
    sort(v1.begin(),v1.end(),compare);
    struct Node *head = new Node();
    head->next=NULL;
    head->data = v1[0];
    Node *temp = head;
    for(int i = 1;i<v1.size();i++)
    {
        struct Node *nnode = new Node();
        nnode->next = NULL;
        nnode->data = v1[i];
        temp->next = nnode;
        temp = nnode;
    }
    return head;
}