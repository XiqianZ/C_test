#include <cstdint>
#include "../pub/pub.hpp"
#include <bitset>


uint32_t reverseBits(uint32_t n){
    
    uint32_t result = 0;
    for(int i = 0; i < 32; i++){
        result = result << 1;
        result = result | (n & 1);
        n = n >> 1;
    }
    return result;
}

// extract the last bit of n by n & 1
// save the last bit of n to result by result = result | (n & 1)
// shift result to the left by 1 by result = result << 1
// sheft n to the right by 1 by n = n >> 1
// repeat the above steps for 32 times

uint32_t reverseBits_2(uint32_t n){
    n = (n >> 16) | (n << 16);
    n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
    return n;
}

uint32_t reverseBits_3(uint32_t n){
    uint32_t result = 0;
    for(int i=0; i<32; i++){
        result = result << 1;
        result = result | (n & 1);
        n = n >> 1;
    }
    return result;
}


int main(){
    uint32_t n = 0b00000010100101000001111010011100;
    uint32_t result = reverseBits_3(n);
    cout << "0b" << bitset<32>(result) << endl;

    return 0;
}