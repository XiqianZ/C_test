#include "../pub/pub.hpp"
#include <string>

using namespace std;



vector<string> summaryRanges(vector<int>& nums){
    vector<string> result;
    if(nums.size()==0){
        return result;
    }
    int begin = nums[0];
    int end = nums[0];
    for(int i=1; i<nums.size(); i++){
        if(nums[i] == end+1){
            end = nums[i];
        } else {
            if(begin == end){
                result.push_back(to_string(begin));
            } else {
                result.push_back(to_string(begin) + "->" + to_string(end));
            }
            begin = nums[i];
            end = nums[i];
        }
    }
    if(begin == end){
        result.push_back(to_string(begin));
    } else {
        result.push_back(to_string(begin) + "->" + to_string(end));
    }
    return result;
}

// vector<string> summaryRanges(vector<int>& nums){
//     vector<string> result;
//     string begin;
//     string end;
//     int currentInt;
//     if(nums.size()==0){
//         return result;
//     } else {
//         currentInt = nums[0];
//         begin = "[" + std::to_string(currentInt);
//         end = "]";
//     }
//     for(int i : nums){
//         if(i-currentInt == 1){
//         } else if (i-currentInt > 1) {
//             end = std::to_string(currentInt) + "]";
//             std::string element = begin + end;
//             result.push_back(element);
//         }
//         currentInt = i;
        
//     }
//     return result;
// }




int main() {
    cout<<"hello world"<<endl;

    return 0;
}