#include<stdio.h>
#include<iostream>

//用二进制乘上去，然后取二进制的平方的一半

using namespace std;
int test(int x){
    if(x==0) return 0;
    int even_order = 0;
    long int right = 1;
    long int left = 0;
    while(right < x){
        even_order++;
        left = right;
        right = right * 4;
    }
    cout<<"left: "<<left<<" | right: "<<right<<endl;

    int result = 1;
    for(int i = 0;i<even_order-1;i++){
        result = 2*result;
    }
    cout<<"even_order: "<<even_order<<endl;
    cout<<"result: "<<result<<endl;

    long int try_sq = result * result;
    while(try_sq <= x){
        result++;
        try_sq = result * result;
        cout<<"result: "<<result<<" | try_sq: "<<try_sq<<endl;
    }
    cout<<"left: "<<left<<" | right: "<<right<<endl;
    return result-1;
}


int mySqrt(int x){
    if(x==0) return 0;

    int start = 1;
    int end = x;
    int mid = -1;

    while(start<=end){
        mid = start + (end-start)/2;
        if(mid == x/mid) return mid;
        else if(mid < x/mid) start = mid+1;
        else end = mid-1;
        cout<<"start: "<<start<<" | end: "<<end<<" | mid: "<<mid<<endl;
    }
    return end;
}

int main(){
    cout<<mySqrt(64)<<endl;

    return 0;
}