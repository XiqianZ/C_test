#include "../pub/pub.hpp"


bool isPowerOfTwo(int n){
    if(n == 1) return true;
    long int temp = 1;
    while(temp < n){
        temp = temp * 2;
    }
    if(temp == n) return true;
    return false;
}

bool isPowerOfTwo(int n){
    if(n == 1) return true;
    if(n == 0) return false;
    if(n % 2 != 0) return false;
    return isPowerOfTwo(n/2);
}

bool isPowerOfTwo_noloop_noRecursion(int n){
    
}


int main(){
    int n = 16;
    cout<<isPowerOfTwo(n)<<endl;
}