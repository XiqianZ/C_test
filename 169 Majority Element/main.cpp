#include "../pub/pub.hpp"

int majorityElement(vector<int> & nums){
    map<int, int> freq;
    for(auto i : nums){
        freq[i]++; 
    }
    int majority = nums[0];
    for(auto &pair : freq){
        if(pair.second > freq[majority]){
            majority = pair.first;
        }
    }
    return majority;
}

int majorityElement2(vector<int> & nums){
    int count = 0;
    int candidate = 0;
    for(auto i : nums){
        if(count == 0){
            candidate = i;
        }
        count += (i == candidate) ? 1 : -1;
    }
    return candidate;
}


int main(){
    std::cout<<"Hello World"<<std::endl;




}