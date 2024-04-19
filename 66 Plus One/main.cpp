#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

vector<int> test(vector<int>& digits){
    size_t n = digits.size();
    for(int i = n-1; i>=0; i--){
        if(digits[i] == 9){
            digits[i] = 0;
        } else {
            digits[i]++;
            return digits;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}


vector<int> plusOne(vector<int>& digits) {
    for(int i = size(digits) - 1; i >= 0; i--){
        if(digits[i] != 9){
            digits[i]++;
            return digits;
        }

        else{
            digits[i] = 0;
            if(i == 0){
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
        }

    }
    return digits;     

}


int main(){
    std::cout<<"Hello World"<<std::endl;
    return 0;
}