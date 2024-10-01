#include "../pub/pub.hpp"


bool containDuplicate(vector<int>& nums){
    set<int> int_set;
    for(int num : nums){
        if(int_set.find(num) == int_set.end()){
            int_set.insert(num);

        } else {
            return true;
        }
    }
    return false;
}


bool containDuplicate(vector<int>& nums){
    set<int> seen;
    for(int num : nums){
        if(seen.count(num)>0){
            return true;
        } 
        seen.insert(num);
    }
    return false;
}




int main(){
    cout<<"Hello World"<<std::endl;


    return 0;
}