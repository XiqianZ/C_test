#include "../pub/pub.hpp"
#include <string>


vector<string> binaryTreePaths(TreeNode* root){
    vector<string> res;
    if(root == nullptr) return res;
    if(root->left == nullptr && root->right == nullptr){
        res.push_back(to_string(root->val));
        return res;
    }
    vector<string> left = binaryTreePaths(root->left);
    for(auto s : left){
        res.push_back(to_string(root->val) + "->" + s);
    }
    vector<string> right = binaryTreePaths(root->right);
    for(auto s : right){
        res.push_back(to_string(root->val) + "->" + s);
    }
    return res;
}


int main(){
    cout<<"Hello World"<<endl;
    
    return 0;
}