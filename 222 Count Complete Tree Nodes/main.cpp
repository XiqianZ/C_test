#include "../pub/pub.hpp"


// int countNodes(TreeNode* root){
//     int level = 0;
//     TreeNode* temp = root;
//     while(temp){
//         level++;
//         temp = temp->left;

//     }
// }

int countNodes(TreeNode* root){
    if(!root) return 0;
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return left+right+1;
}





int main(){
    cout<<"Hello world"<<endl;



    return 0;
}