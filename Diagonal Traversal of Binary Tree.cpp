oid diagonalPrintUtil(Node *root,map<int,vector<int>> &m,int d)
{
    if(root==NULL) return;
    m[d].push_back(root->data);
    
    diagonalPrintUtil(root->left,m,d+1);
    diagonalPrintUtil(root->right,m,d);
}

void diagonalPrint(Node *root)
{
   // your code here
   map<int,vector<int>> m;
   diagonalPrintUtil(root,m,0);
   
   for(auto it = m.begin();it!=m.end();it++)
   {
       for(auto itr = it->second.begin();itr!=it->second.end();itr++)
       {
           cout << *itr << " ";
       }
   }
}