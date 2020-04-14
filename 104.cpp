#include <iostream>
#include<cmath>
#include<queue>
using namespace std;
 //Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//递归的方法
// int maxDepth(TreeNode* root) {
//     if(root == NULL) return 0;
//     else if(root->left == NULL && root->right == NULL) return 1;
//     else {
//         return 1+max(maxDepth(root->left),maxDepth(root->right));
//     }
// }

//bfs的方法
int maxDepth(TreeNode * root) {
    queue<TreeNode*> myque;
    if(root == NULL) return 0;
    myque.emplace(root);
    int depth = 0;
    //把每一层给push进去
    while(!myque.empty()){
    int size = myque.size();
    for(int i = 0; i < size; i++) {
        TreeNode* node = myque.front();
        if(node->left != NULL) myque.push(node->left);
        if(node->right != NULL) myque.push(node->right);
        myque.pop();
    }
    depth++;
    }
    return depth;
}
int main() {

}