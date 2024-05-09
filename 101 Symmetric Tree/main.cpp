#include"../pub/pub.hpp"

using namespace std;




bool isMirror(TreeNode* root1, TreeNode* root2){
    // if(root1 == nullptr && root2 == nullptr){
    //     return true;
    // }
    // if(root1 == nullptr || root2 == nullptr){
    //     return false;
    // }
    //This can be simplified as 
    if(root1==nullptr || root2==nullptr){
        return root1 == root2;
    }

    if(root1->val != root2->val){
        return false;
    }
    return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
}


bool isSymmetric(TreeNode* root){
    if(root == nullptr){
        return true;
    }
    return isMirror(root->left, root->right);
}

int main(){
    cout << "Hello World" << endl;

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    // test(root);
    cout<< isSymmetric(root) << endl;

    return 0;
}