#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution{
    public:

    bool isValid(string s){
        vector<char> stack;
        for(size_t i = 0; i< s.size(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stack.push_back(s[i]);
            } else {
                 if(s[i]==')'){
                    if(stack.empty() || stack.back() != '('){
                        return false;
                    }
                    stack.pop_back();
                } else if(s[i] == ']'){
                    if(stack.empty() || stack.back() != '['){
                        return false;
                    }
                    stack.pop_back();
                } else if(s[i] == '}'){
                    if(stack.empty() || stack.back() != '{'){
                        return false;
                    }
                    stack.pop_back();
                }
            }
        }
        return stack.empty();
    }

};

int main(){
    printf("Hello World\n");
    Solution s;
    printf("result: %d\n", s.isValid("){"));


    return 0;
}


