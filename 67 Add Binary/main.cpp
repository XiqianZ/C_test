#include<stdio.h>
#include<iostream>
#include <string>

using namespace std;


string test(string a, string b){
    int index_a = a.size() - 1;
    int index_b = b.size() - 1;
    bool carry = false;
    string result = "";
    int small_index = (index_a < index_b) ? index_a : index_b;
    for(int i=small_index; i>=0; i--){
        cout<<result<<endl;
        if(a[i]=='1' && b[i]=='1'){
            if(carry){
                result = '1' + result;
            } else {
                result = '0' + result;
            }
            carry = true;
        } else if (a[i]=='0' && b[i]=='0'){
            if(carry){
                result = '1' + result;
            } else {
                result = '0' + result;
            }
            carry = false;
        } else {
            if(carry){
                result = '0' + result;
                carry = true;
            } else {
                result = '1' + result;
                carry = false;
            }
        }
    }
    if(carry){
        result = '1' + result;
    }
    return result;
}




string addBinary(string a, string b){
    int ia = a.size() - 1;
    int ib = b.size() - 1;
    int carry = 0;
    string result = "";
    while(ia >= 0 || ib >= 0){
        int sum = carry;
        if(ia >= 0){
            sum += a[ia--] - '0';
        }
        if(ib >= 0){
            sum += b[ib--] - '0';
        }
        result = to_string(sum % 2) + result;
        carry = sum / 2;
    }
    return result; 
}


int main(){
    // std::cout<<"Hello World"<<std::endl;
    // string result = test("1010", "1011");
    // cout<<"result: + " <<result<<endl;

    string a = "10";
    string b= "10";
    if(b[2]){
        cout<<"b2"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    // string b = '1' + a;
    // cout<<b<<endl;

    return 0;
}