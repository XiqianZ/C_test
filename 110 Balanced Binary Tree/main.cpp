#include"../pub/pub.hpp"

using namespace std;


int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int out = max(maxDepth(root->left), maxDepth(root->right))+1;
    root->left = NULL;
    root->right = NULL;
    return out;
}



bool test(TreeNode* root){
    if(root == nullptr){
        return true;
    } 
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    cout<<left<<" "<<right<<endl;
    if(abs(left-right) > 1){
        return false;
    }
    return test(root->left) && test(root->right);
}










int main(){
    cout<<"Hello World"<<endl;

    //[1,2,2,3,null,null,3,4,null,null,4]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = NULL;
    root->right->left = NULL;
    root->right->right = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    root->right->right->right = new TreeNode(4);


    TreeNode* root2 = root->left;

    TreeNode* root3 = root->left->left;


    cout<<test(root)<<endl;
    // cout<<maxDepth(root)<<endl;
    // cout<<maxDepth(root2)<<endl;
    

    return 0;
}