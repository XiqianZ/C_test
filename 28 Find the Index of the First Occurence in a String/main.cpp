#include<stdio.h>
#include<iostream>
#include <string>
#include <cassert>

using namespace std;

int test(string h, string n){
    for(int i =0; i<h.size(); i++){
        if(n[0] == h[i]){
            if(i+n.size() > h.size()){
                return -1;
            }
            if(n.size() <2 ){
                return i;
            }
            int j = 1;
            for(j=1; j<n.size(); j++){
                std::cout << j << std::endl;
                if(n[j] != h[i+j]){
                    break;
                }
            }
            if(j==n.size()){
                return i;
            }
        }
    }

    return -1;
}


int strStr(string haystack, string needle) {
    int effect_length = haystack.size() - needle.size();
    for (int i=0; i<=effect_length; i++) {
        int j = 0;
        for (j=0; j<needle.size(); j++) {
            if (haystack[i+j] != needle[j]) {
                break;
            }
        }
        if (j == needle.size()) {
            return i;
        }
    }
    return -1;
}


int strStr_1(std::string haystack, std::string needle) {
    if(needle.size() > haystack.size()){
        return -1;
    }
    for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
        if (haystack.substr(i, needle.length()) == needle) {
            return i;
        }
    }
    return -1;
}

int main(){
    string h = "sadbutsad";
    string n = "sad";
    int result = strStr(h, n);
    cout << result << endl;

    return 0;
}