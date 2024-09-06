#include "../pub/pub.hpp"



int lengthOfLongestSubstring(string s){

    int n = s.size();
    if(n==0) return 0;
    if(n==1) return 1;

    int max_len = 0;
    int start = 0;
    int end = 0;
    std::set<char> char_set;

    while(end<n){
        if(char_set.find(s[end]) == char_set.end()){
            char_set.insert(s[end]);
            max_len = std::max(max_len, end-start+1);
            end++;
        }else{
            char_set.erase(s[start]);
            start++;
        }
    }

    return max_len;


}





int main(){
    std::cout<<"Hello World"<<std::endl;

    std::string s = "asssssb";
    std::cout<<lengthOfLongestSubstring(s)<<std::endl;

    return 0;
}