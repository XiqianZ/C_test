#include "../pub/pub.hpp"

// use sorting
// Use unordered_map to store the frequency of each number in the vector
//use XOR

//std
#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>

int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for(int num : nums){
        result ^= num;
    }
    return result;
}

int singleNumber_sort(vector<int>& nums) { 
    std::sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i+=2)
    {
        if(nums[i]!=nums[i-1])
            return nums[i-1];
    }
    return nums[nums.size()-1];
}


int singleNumber_sum(vector<int>& nums) {
    int sum = 0;
    std::set<int> s(nums.begin(), nums.end());
    for(int num : nums){
        sum += num;
    }
    return 2 * std::accumulate(s.begin(), s.end(), 0) - sum;      //accumulate need to include <numeric>
}

int main(){
    std::cout<<"Hello, World!"<<std::endl;






    return 0;
}