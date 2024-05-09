#include<stdio.h>
#include<vector>
#include<iostream>
#include <stack>

using namespace std;

/*
Inorder traversal is a type of depth-first traversal method used on binary trees. In this traversal method, the order of visiting the nodes of the tree is:

Visit the left subtree
Visit the root node
Visit the right subtree
This is done recursively until all nodes have been visited. The result is a list of the tree's nodes in ascending order (if the binary tree is a binary search tree).
*/

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


vector<int> inorderTraversal(TreeNode* root){
    vector<int> res = {};
    if(root == NULL){
        return res;
    }
    vector<int> left = inorderTraversal(root->left);
    vector<int> right = inorderTraversal(root->right);
    res.insert(res.end(), left.begin(), left.end());
    res.push_back(root->val);
    res.insert(res.end(), right.begin(), right.end());
    return res;

}


vector<int> preorderTraversal(TreeNode* root){
    vector<int> res = {};
    if(root == NULL){
        return res;
    }
    vector<int> left = preorderTraversal(root->left);
    vector<int> right = preorderTraversal(root->right);
    res.push_back(root->val);
    res.insert(res.end(), left.begin(), left.end());
    res.insert(res.end(), right.begin(), right.end());
    return res;
}


vector<int> postorderTraversal(TreeNode* root){
    vector<int> res = {};
    if(root == NULL){
        return res;
    }
    vector<int> left = postorderTraversal(root->left);
    vector<int> right = postorderTraversal(root->right);
    res.insert(res.end(), left.begin(), left.end());
    res.insert(res.end(), right.begin(), right.end());
    res.push_back(root->val);
    return res;
}



vector<int> stackInorderTraversal(TreeNode* root){
    vector<int> res = {};
    stack<TreeNode*> stack;
    TreeNode* current = root;
    while(current != NULL || !stack.empty()){
        while(current != NULL){
            stack.push(current);
            current = current->left;
        }
        current = stack.top();
        stack.pop();
        res.push_back(current->val);
        current = current -> right;
    }
    return res;
}


// vector<int> test(TreeNode* root){
//     vector<int> res = {};
//     TreeNode* current = root;
//     while(current != NULL){
//         if(current->left != NULL && current->right != NULL){
//             if(current->left >= current->right){
//                 res.push_back(current->val);
//                 current = current->left;
//             } else {
//                 res.push_back(current->val);
//                 current = current->right;
//             }
//         } else if(current->left == NULL){
//             res.push_back(current->val);
//             current = current->right;
//         } else {
//             res.push_back(current->val);
//             current = current->left;
//         }
//     }
//     return res;
// }


int main(){
    printf("Hello World\n");
    //tree = [1,null,2,3]
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> res = test(root);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }


    return 0;
}