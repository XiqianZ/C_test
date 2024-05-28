#include "../pub/pub.hpp"
#include <queue>



TreeNode* sortedArrayToBST(vector<int>& nums){
    if(nums.size() == 0){
        return NULL;
    }
    int mid = nums.size() / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    vector<int> left(nums.begin(), nums.begin() + mid);
    vector<int> right(nums.begin() + mid + 1, nums.end());
    root->left = sortedArrayToBST(left);
    root->right = sortedArrayToBST(right);
    return root;
}


TreeNode* test_not_so_correct(vector<int>& nums) {
    if(nums.size() == 0) return nullptr;
    int mid = nums.size() / 2;
    cout<<"mid: "<<mid<<" number: "<<nums[mid]<<endl;
    TreeNode* root = new TreeNode(nums[mid]);

    int left = mid-1;
    int right = nums.size()-1;
    cout<<"init left: "<<left<<" init right: "<<right<<endl;
    TreeNode* currentLeft = root;
    TreeNode* currentRight = root;
    bool switcher = true;
    while(left>=0 || right>mid){
        if(left>=0) {
            cout<<"left: "<<left<<" attach: "<<nums[left]<<endl;
            currentLeft->left = new TreeNode(nums[left--]);
            currentLeft = currentLeft->left;
        }
        if(right>mid) {
            cout<<"right: "<<right<<" attach: "<<nums[right]<<endl;
            if(switcher){
                currentRight->right = new TreeNode(nums[right--]);
                currentRight = currentRight->right; //root right
                switcher = false;
            } else {
                currentRight->left = new TreeNode(nums[right--]);
                currentRight = currentRight->left;
            }
        }
        // cout<<"left: "<<left<<" right: "<<right<<endl;
    }
    
    return root;
}


vector<int> postorderTraversal(TreeNode* root){
    vector<int> res = {};
    if(root == NULL){
        return res;
    }
    vector<int> left = postorderTraversal(root->left);
    vector<int> right = postorderTraversal(root->right);
    res.insert(res.end(), left.begin(), left.end());
    res.insert(res.end(), right.begin(), right.end());
    res.push_back(root->val);
    return res;
}

vector<int> levelorderTraversal(TreeNode* root){
    vector<int> res = {};
    if(root == NULL){
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();
        res.push_back(current->val);
        if(current->left != NULL){
            q.push(current->left);
        }
        if(current->right != NULL){
            q.push(current->right);
        }
    }
    return res;

}

int main(){

    // vector<int> nums = {-10,-3,0,5,9};
    // vector<int> nums = {1,3};
        vector<int> nums = {0,1,2,3,4,5,6};
    TreeNode* root = test(nums);
    vector<int> res = postorderTraversal(root);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

    cout<<endl;
    cout<<"Hello World"<<endl;


    return 0;
}