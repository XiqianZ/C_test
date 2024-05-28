#include "../pub/pub.hpp"



int minDepth(TreeNode* root){
    if(root == nullptr){
        return 0;
    }
    if(root->left==nullptr && root->right==nullptr){
        return 1;
    }
    if(root->left==nullptr || root->right==nullptr){
        return max(minDepth(root->left),minDepth(root->right)) + 1;
    } else {
        return min(minDepth(root->left),minDepth(root->right)) + 1;
    }
}


int minDepth2(TreeNode* root) {
    if(root == nullptr){
        return 0;
    }
    if(root->left == nullptr && root->right == nullptr){
        return 1;
    }
    int left = INT_MAX;
    int right = INT_MAX;
    if(root->left != nullptr){
        left = minDepth2(root->left);
    }
    if(root->right != nullptr){
        right = minDepth2(root->right);
    }
    return min(left, right)+1;
}


int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int out = max(maxDepth(root->left), maxDepth(root->right))+1;

    return out;
}


int main(){
    cout<<"Hello World"<<endl;

    //[3,9,20,null,null,15,7]
    // TreeNode* root = new TreeNode(3);
    // root->left = new TreeNode(9);
    // root->right = new TreeNode(20);
    // root->right->left = new TreeNode(15);
    // root->right->right = new TreeNode(7);
    // cout<<minDepth(root)<<endl; 

    //[2,null,3,null,4,null,5,null,6]
    TreeNode* root2 = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->right->right = new TreeNode(4);
    root2->right->right->right = new TreeNode(5);
    root2->right->right->right->right = new TreeNode(6);
    cout<<minDepth(root2)<<endl;
    return 0;
}