vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
   vector<int>ans;
    queue<BinaryTreeNode<int> *>q;
    if(root==NULL)
    {
        return ans;
    }
    q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int> *node=q.front();
        q.pop();
        if(node->left!=NULL)
        {
            q.push(node->left);
        }
        if(node->right!=NULL)
        {
            q.push(node->right);
        }
        ans.push_back(node->val);
    }
    return ans;
}
