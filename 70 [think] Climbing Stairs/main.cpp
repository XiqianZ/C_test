#include<stdio.h>
#include<iostream>

using namespace std;


int climbStairs(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    int first = 1;
    int second = 2;
    int result = 0;
    for(int i = 2;i<n;i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}


// int test(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     int three_remain = n%3;
//     int three_divide = n/3;
//     int result = 0;
//     if(three_remain == 0){
//         result = 3;
//         for(int i = 0;i<three_divide-1;i++){
//             result = 3*result;
//         }
//     }else if(three_remain == 1){
//         result = 4;
//         for(int i = 0;i<three_divide-1;i++){
//             result = 3*result;
//         }
//         result = result + 1;
//     }else{
//         result = 2;
//         for(int i = 0;i<three_divide;i++){
//             result = 3*result;
//         }
//     }
//     return result;
// }




int main(){
    cout<<climbStairs(3)<<endl;

    return 0;
}