int getHeight(struct TreeNode* root) {
    if(root == NULL)
        return 0;

    int left = getHeight(root->left);
    int right = getHeight(root->right);
    return (left > right ? left : right) + 1;
}

void traversal(struct TreeNode* root, int** order, int** columnSizes, int level) {
    if(root == NULL)
        return;

    order[level] = realloc(order[level], sizeof(int*) * ((*columnSizes)[level] + 1));
    order[level][(*columnSizes)[level]] = root->val;
    printf("r%d c%d: %d\n", level, (*columnSizes)[level], order[level][(*columnSizes)[level]]);
    (*columnSizes)[level]++;

    traversal(root->left, order, columnSizes, level + 1);
    traversal(root->right, order, columnSizes, level + 1);

    return;
}

int** levelOrder(struct TreeNode* root, int** columnSizes, int* returnSize) {
    int level = 0;
    int height = getHeight(root);
    printf("height: %d\n", height);
    *returnSize = height;
    *columnSizes = malloc(sizeof(int) * height);
    int** order = malloc(sizeof(int*) * height);

    for(int i = 0; i < height; i++)
        (*columnSizes)[i] = 0;

    for(int i = 0; i < height; i++)
        order[i] = malloc(sizeof(int));

    traversal(root, order, columnSizes, 0);

    return order;
}
