#include "../pub/pub.hpp"


vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    stack<TreeNode*> s;
    TreeNode* p = root;
    while(p || !s.empty()) {
        if(p) {
            res.push_back(p->val);
            s.push(p);
            p = p->left;
        } else {
            p = s.top();
            s.pop();
            p = p->right;
        }
    }
    return res;
}


void recursive_fun(TreeNode* root, vector<int>& res){
    if(root){
        res.push_back(root->val);
        recursive_fun(root->left, res);
        recursive_fun(root->right, res);
    }
}


int main(){
    cout<<"Hello, World!"<<endl;

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);




    return 0;

}