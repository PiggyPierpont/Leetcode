struct TreeNode* build(int* preorder, int pres, int pree, int* inorder, int ins, int ine) {
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    root->val = preorder[pres];

    if (pres == pree) {
        root->left = NULL;
        root->right = NULL;
        return root;
    }

    int ni = ins;

    for(; ni <= ine; ni++) {
        if(inorder[ni] == preorder[pres])
            break;
    }

    int pi = ni - ins + pres;

    root->left = build(preorder, pres + 1, pi, inorder, ins, ni - 1);
    root->right = build(preorder, pi + 1, pree, inorder, ni + 1, ine);

    return root;
} 

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    if (preorderSize == 0 || inorderSize == 0)
        return NULL;
        
    return build(preorder, 0, preorderSize - 1, inorder, 0, inorderSize - 1);
}
