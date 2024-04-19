#include<stdio.h>
#include<vector>
#include <iostream>

using namespace std;


int test(vector<int>& nums, int target){
    int index = nums.size()/2;
    int left = 0;
    int right = nums.size()-1;
    while(left <= right){
        index = left + (right - left)/2;
        if(nums[index] == target){
            return index;
        } else if(nums[index] < target){
            left = index + 1; 
        } else {
            right = index - 1;
        }
    }
    return left;
}


int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}


int main(){
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    int result = test(nums, target);
    cout << result << endl;


    // std::cout<<1/2<<std::endl;


    std::cout<<"Hello World"<<std::endl;

    return 0;
}