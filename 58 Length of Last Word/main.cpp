#include<stdio.h>
#include<iostream>
#include<cassert>

using namespace std;

int lengthOfLastWord(string s) {
    size_t end = s.length();
    while(end > 0 && isspace(s[end-1])){
        end--;
    }
    for(int i = end-1; i >= 0; i--){
        if(isspace(s[i])) return end - i - 1;
    }
    size_t length= end;
    while(end>0 && !isspace(s[end-1])){
        end--;
    }
    return length - end;
}

int main(){
    std::cout<<"Hello World"<<std::endl;
    string s = "a";
    cout<<lengthOfLastWord(s)<<endl;
    assert(lengthOfLastWord("s") == 1);

    return 0;
}