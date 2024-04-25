#include<stdio.h>
#include<iostream>
#include <string>
#include <typeinfo>
#include <algorithm>

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
        cout<<"ia: "<<ia<<" | ib: "<<ib<<endl;
        int sum = carry;
        if(ia >= 0){
            sum += a[ia--] - '0';
        }
        if(ib >= 0){
            sum += b[ib--] - '0';
        }
        result = to_string(sum % 2) + result;
        carry = sum / 2;
        cout<<"result: "<<result<<" | carry: "<<carry<<endl;
    }
    if(carry){
        result = '1' + result;
    }
    return result; 
}

string addBinary2(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      cout<<"ans: "<<ans<<" carry%2: "<<carry%2<<" carry%2 + '0': "<<carry%2+'0' <<endl;
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }


int main(){
    // std::cout<<"Hello World"<<std::endl;
    string result = addBinary2("11", "1");
    cout<<"result: " <<result<<endl;

    // string a = "10";
    // string b= "10";
    // int te = 0;
    // cout<<"First: "<<'0' - '0'<<endl;
    // cout<<"Second: "<<'1' - '0'<<endl;
    // cout<<"type: "<<typeid('1' - '0').name()<<endl;
    
    // string b = '1' + a;
    // cout<<b<<endl;

    return 0;
}