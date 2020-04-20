#include<iostream>
#include<queue>
using namespace std;

 //Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };


TreeNode* invertTree(TreeNode* root) {
    if(root == NULL) return root;
    TreeNode* now = root;
    queue<TreeNode*>myque;
    myque.push(root);
    while(!myque.empty()) {
        now = myque.front();
        myque.pop();
        if(now!= NULL && (now->left != NULL|| now->right!=NULL)){
        swap(now->left,now->right);
        myque.push(now->left);
        myque.push(now->right);
        }
    }
    return root;
}
int main() {

}