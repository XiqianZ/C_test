#include "../pub/pub.hpp"
#include <unordered_map>

bool isAnagram(string s, string t){
    unordered_map<char, int> map_t, map_s;

    for(char c : s){
        map_s[c] += 1;
    }
    for(char c : t){
        map_t[c] += 1;
    }
    if(map_t.size() != map_s.size()){
        return false;
    }
    for(const auto& pair : map_t){
        if(map_s[pair.first] != pair.second){
            return false;
        }
    }
    return true;
}




int main(){
    std::cout<<"Hello World"<<std::endl;





    return 0;
}