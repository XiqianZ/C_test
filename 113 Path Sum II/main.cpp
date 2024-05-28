#include "../pub/pub.hpp"


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

vector<vector<int>> test(TreeNode* root, int targetSum){
    vector<vector<int>> res;
    vector<int> path;
    if(root==nullptr){
        return res;
    }
    int target = targetSum - root->val;
    path.push_back(root->val);
    if(target == 0 && root->left==nullptr && root->right==nullptr){
        res.push_back(path);
        return res;
    }
    vector<vector<int>> left = test(root->left, target);
    vector<vector<int>> right = test(root->right, target);
    for(auto l : left){
        l.insert(l.begin(), root->val);
        res.push_back(l);
    }
    for(auto r : right){
        r.insert(r.begin(), root->val);
        res.push_back(r);
    }
    return res;

}






int main(){
    cout<<"Hello World"<<endl;

    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector using push_back()
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(0);

    // Print the elements of the vector
    std::cout << "Elements in the vector: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}