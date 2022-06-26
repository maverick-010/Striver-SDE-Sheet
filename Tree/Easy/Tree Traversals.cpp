void traversal(BinaryTreeNode<int> *root, vector<int> &pre, vector<int> &in, vector<int> &post) {
    if(!root) return;
    
    pre.push_back(root -> data);
    
    traversal(root -> left, pre, in, post);
    in.push_back(root -> data);
    traversal(root -> right, pre, in, post);
    
    post.push_back(root -> data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<int> pre, in, post;
    
    traversal(root, pre, in, post);
    return {in, pre, post};
}
