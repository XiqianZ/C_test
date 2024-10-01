#include "../pub/pub.hpp"


bool containNearbyDuplicate(vector<int>& nums, int k){
    int length = nums.size();
    map<int, int> position;
    for(int i=0; i<length; i++){
        if(position.count(nums[i])){
            if(k>=i-position[nums[i]]) return true;
        }
        position[nums[i]] = i;
    }
    return false;
}


bool containNearbyDuplicate2(vector<int>& nums, int k){
    int length = nums.size();
    set<int> position;
    for(int i=0; i<length; i++){
        if(position.count(nums[i])){
            return true;
        }
        position.insert(nums[i]);
        if(position.size()>k){
            position.erase(nums[i-k]);
        }
    }
    return false;
}


int main(){
    cout<<"Hello World"<<endl;

    vector<int> nums = {1,2,3,1};
    int k = 3;
    cout<<containNearbyDuplicate(nums, k)<<endl;



    return 0;
}