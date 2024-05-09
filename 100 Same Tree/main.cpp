#include<stdio.h>
#include<vector>
#include<iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



bool isSameTree(TreeNode* p, TreeNode* q){
    if(p==nullptr && q==nullptr){
        return true;
    }
    if(p== nullptr || q==nullptr){
        return false;
    }
    if(q->val != p->val){
        return false;
    } else{
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}



int main(){
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(1);
    TreeNode* q = new TreeNode(1);
    q->right = new TreeNode(1);
    cout << isSameTree(p, q) << endl;

    return 0;
}