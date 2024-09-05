#include "../pub/pub.hpp"

#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome_0(std::string s){
    std::string alphanumeric;
    for(char c : s){
        if(std::isalnum(c)){
            alphanumeric += std::tolower(c);
        }
    }
    // Check if the alphanumeric string is a palindrome
    int left = 0;
    int right = alphanumeric.length() - 1;
    while(left < right){
        if(alphanumeric[left] != alphanumeric[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}


bool isPalindrome_1(std::string s){
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        if(!std::isalnum(s[left])){ left++; }
        else if(!std::isalnum(s[right])){ right--; }
        else if(std::tolower(s[left]) != std::tolower(s[right])){ return false; }
        else{
            left++;
            right--;
        }
    }
    return true;
}


bool isPalindrome_2(std::string s){
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        if(!std::isalnum(s[left])){
            left++;
        } else if(!std::isalnum(s[right])){
            right--;
        } else if(std::tolower(s[left]) != std::tolower(s[right])){
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    std::cout << "Hello World" << std::endl;

    return 0;
}



