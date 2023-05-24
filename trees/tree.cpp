#include "tree.h"
#include "../queues/queue.h"
#include <algorithm>
#include <queue>
#include <stack>

int treeheight(TreeNode* root){
    int lheight, rheight;
    if(root==nullptr) return -1;
    lheight=treeheight(root->left);
    rheight=treeheight(root->right);
    return 1 + std::max(lheight, rheight);
}

int treetotal(TreeNode* root){
    int leftsum, rightsum, sum;
    if(root==nullptr) return -1;

    if(root->left==nullptr) leftsum=0;
    else leftsum = treetotal(root->left);

    if(root->right==nullptr) rightsum=0;
    else rightsum = treetotal(root->right);

    sum = root->val + leftsum + rightsum;
    return sum;
}

void breadth_traversal(TreeNode* root){
    std::queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* cNode = q.front();
        q.pop();
        std::cout << "Node value: " << cNode->val << std::endl;
        if(cNode->left) q.push(cNode->left);
        if(cNode->right) q.push(cNode->right);
    }
}

void depth_traversal(TreeNode* root){
    std::stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()){
        TreeNode* cNode = s.top();
        s.pop();
        if(root->right!=nullptr) s.push(root->right);
        if(root->left!=nullptr) s.push(root->left);

    }
}