int solve(TreeNode<int> *root, int &diameter){
    if(!root)    return 0;
    int ld = solve(root->left, diameter);
    int rd = solve(root->right, diameter);
    
    diameter = max(diameter, ld + rd);
    return 1 + max(ld, rd);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    // Write Your Code Here.
    int diameter = 0;
    solve(root, diameter);
    return diameter;
}
