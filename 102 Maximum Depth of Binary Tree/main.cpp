#include "../pub/pub.hpp"


int maxDepth_0(TreeNode* root){
    if(root == nullptr){
        return 0;
    } 
    return 1 + max(maxDepth_0(root->left), maxDepth_0(root->right));
}
    

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int out = max(maxDepth(root->left), maxDepth(root->right))+1;
    root->left = NULL;
    root->right = NULL;
    return out;
}

int main(){
    cout<<"Hello World"<<endl;

    return 0;
}