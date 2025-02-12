int toInt(string s)
{
    int num = 0;
    if(s[0]!='-')
    {
        for(int i = 0;i<s.length();i++)
        {
            num = num*10 + (int(s[i])-48);
        }
    }
    else
    {
        for(int i = 1;i<s.length();i++)
        {
            num = num*10 + (int(s[i])-48);
            num = num*-1;
        }
    }
    return num;
}
int evalTree(node* root)
{
    //Your code here
    if(!root) return 0;
    if(!root->left && !root->right) return toInt(root->data);
    int l = evalTree(root->left);
    int r = evalTree(root->right);
    if(root->data=="+") return l+r;
    if(root->data=="-") return l-r;
    if(root->data=="*") return l*r;
    return l/r;
}