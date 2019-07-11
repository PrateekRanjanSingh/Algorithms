int maxLevelSum(Node * root)
{
   //Your code here
   queue<Node *> q;
   q.push(root);
   int result = root->data;
   while(!q.empty())
   {
       int s = q.size();
       int sum = 0;
       while(s--)
       {
           Node *temp = q.front();
           int n = temp->data;
           q.pop();
           if(temp->left!=NULL) q.push(temp->left);
           if(temp->right!=NULL) q.push(temp->right);
           sum += n;
       }
       result = max(result,sum);
   }
   return result;
}