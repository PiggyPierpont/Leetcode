#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void inorderHelper(struct TreeNode*, int**, int*);
bool isSymmetric(struct TreeNode*);

int main(void) {
    struct TreeNode root, l, r, ll, lr, rl, rr;
    root.val = 1;
    l.val = 2;
    r.val = 2;
    ll.val = 3;
    rr.val = 3;
    lr.val = 4;
    rl.val = 4;
    root.left = &l;
    root.right = &r;
    l.left = &ll;
    l.right = &lr;
    r.left = &rl;
    r.right = &rr;
    ll.left = ll.right = lr.left = lr.right = rl.left = rl.right = rr.left = rr.right = NULL;

    if(isSymmetric(&root))
        printf("true!\n");
    else
        printf("false!\n");

    return 0;    
}

void inorderHelper(struct TreeNode* root, int** inorder, int* n) {
    if(root) {
        inorderHelper(root->left, inorder, n);
        *inorder = realloc(*inorder, (sizeof(int) * (*n + 1)));
        if(*inorder == NULL)
            printf("fail realloc!\n");
        (*inorder)[*n] = root->val;
        (*n)++;
        inorderHelper(root->right, inorder, n);
    }
    return;
}

bool isSymmetric(struct TreeNode* root) {
    int* inorder = NULL, n = 0;

    inorderHelper(root, &inorder, &n);

    for(int i = 0, j = n - 1; i < j; i++, j--) {
        if(inorder[i] != inorder[j])
            return false;
    }

    return true;
}
