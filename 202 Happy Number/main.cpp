#include "../pub/pub.hpp"


bool isHappy(int n){
    set<int> sum_result;
    int sum = 0;
    while(n){
        sum += (n%10)*(n%10);
        n = n/10;
        if(n==0){
            if(sum == 1){
                return true;
            }
            if(sum_result.find(sum) == sum_result.end()){
                sum_result.insert(sum);
            } else {
                return false;
            }
            n = sum;
            sum = 0;
        }
    }
    return false;
}




int main(){
    cout<<"hello world"<<endl;

    cout<<isHappy(19)<<endl;

    return 0;
}