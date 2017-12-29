struct TreeNode* buildTree(int* inorder, int inorderSize, int* postorder, int postorderSize) {
    struct TreeNode* build(int* in, int ins, int ine, int* post, int posts, int poste) {
        if (ine < ins || poste < posts)     
            return NULL;

        struct TreeNode* root = malloc(sizeof(struct TreeNode));

        root->val = post[poste];

        if (in == ins || posts == poste) {
            root->left = NULL;
            root->right = NULL;
	    return root;
	}

	int ni = 0;

	for (; ni <= ine; ni++) {
            if (in[ni] == post[poste]) 
	        break;
	}
								            
	int np = ni - ins;

	root->left = build(in, ins, ni - 1, post, posts, np + posts - 1);
	root->right = build(in, ni + 1, ine, post, np + posts, poste - 1);

	return root;
    }

    if (inorderSize == 0 || postorderSize == 0)
        return NULL;

    return build(inorder, 0, inorderSize - 1, postorder, 0, postorderSize - 1);
}
