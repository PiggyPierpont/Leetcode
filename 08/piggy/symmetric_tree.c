#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool check(struct TreeNode*, struct TreeNode*);
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

bool check(struct TreeNode* left, struct TreeNode* right) {
    if(left == NULL && right == NULL)
        return true;
    else if(left == NULL || right == NULL)
        return false;

    if(left->val != right->val)
        return false;

    return check(left->left, right->right) && check(left->right, right->left); 
}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL)
        return true;

    return check(root->left, root->right);
}
