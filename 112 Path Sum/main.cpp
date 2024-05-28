#include "../pub/pub.hpp"



// bool test(TreeNode* root, int targetSum){
//     if(root==nullptr){
//         return false;
//     }

// }


// int treeSum(TreeNode* root, int targetSum){
//     if(root==nullptr){
//         return 0;
//     }
//     int sumL = root->val + treeSum(root->left);
//     int sumR = root->val + treeSum(root->right);
    
// }

bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==nullptr){
        return false;
    }
    int target = targetSum - root->val;
    if(target == 0 && root->left==nullptr && root->right==nullptr){
        return true;
    }
    return hasPathSum(root->left, target) || hasPathSum(root->right, target);   
}

int main(){

    cout<<"Hello World"<<endl;

    return 0;
}