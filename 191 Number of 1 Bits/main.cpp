#include "../pub/pub.hpp"


int hammingWeight(uint32_t n) {
    int count = 0;
    while(n){
        n = n & (n-1);  // n&(n-1) will remove the rightmost 1 in n
        count++;    // count the number of 1s; if n has only one 1, then n&(n-1) will be 0
    }
    return count;
}


int hammingWeight2(uint32_t n) {
    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main(){
    std::cout<<"Hello World"<<std::endl;


    return 0;
}