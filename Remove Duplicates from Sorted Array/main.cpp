#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

int test(vector<int>& nums){
    set<int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }
    nums.clear();
    nums.assign(s.begin(), s.end());
    
    return s.size();
}


int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0){
        return 0;
    }
    int i = 0;
    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main(){

    printf("Hello World\n");
    vector<int> nums = {1, 1, 2};

    // int result = test(nums);
    int result = removeDuplicates(nums);
    cout << result << endl;
    for(int i: nums){
        cout << i << " ";
    }


    cout << endl;
    return 0;
}


