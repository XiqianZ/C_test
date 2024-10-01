#include "../pub/pub.hpp"


TreeNode* invertTree(TreeNode* root){

    if(root == nullptr){
        return nullptr;
    }

    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);

    root->left = right;
    root->right = left;

    return root;

}




int main() {
    cout<<"hello world"<<endl;

    return 0;
}   