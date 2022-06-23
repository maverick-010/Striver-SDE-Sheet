void helper(TreeNode* root,vector<int>&output){
    if(root==NULL){
        return;
    }
    output.push_back(root->data);
    helper(root->left,output);
    helper(root->right,output);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> output;
    if(root==NULL){
        return output;
    }
    helper(root,output);
    return output;
}
