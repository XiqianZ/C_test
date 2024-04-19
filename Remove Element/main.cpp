#include<vector>
#include<stdio.h>
#include<iostream>

using namespace std;

int test(vector<int>& nums, int val){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == val){
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return 0;
}

int removeElement(vector<int>& nums, int val){
    int count = nums.size();
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == val){
            count --;
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    return count;
}


int main(){
    vector<int> nums = {0,1,2,2,3,0,4,1};
    int val = 2;
    int result = removeElement(nums, val);
    cout << result << endl;
    for(int i: nums){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}