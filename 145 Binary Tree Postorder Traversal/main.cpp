#include "../pub/pub.hpp"



void recursive_fun(TreeNode* root, vector<int>& res){
    if(root){
        recursive_fun(root->left, res);
        recursive_fun(root->right, res);
        res.push_back(root->val);
    }
}


vector<int> postorderTraversal(TreeNode* root){
    vector<int> res;
    stack<TreeNode*> s;
    TreeNode* p = root;
    while(p || !s.empty()){
        if(p){
            res.push_back(p->val);
            s.push(p);
            p = p->right;
        }else{
            p = s.top();
            s.pop();
            p = p->left;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}





int main(){
    cout<<"Hello, World!"<<endl;


    return 0;
}