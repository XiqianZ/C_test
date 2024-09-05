#include "../pub/pub.hpp"


int titleToNumber(string columnTitle){
    //convert the string to char
    //for each char conver to corresponding int
    //use math to calculate
    //A as int 65
    //Z as int 90
    int result = 0;
    for(char c:columnTitle){
        int value = c-'A'+1;
        result = result*26 + value;
    }
    return result;
}


int main(){
    std::cout<<"Hello World"<<std::endl;    



    cout<<int('A')<<endl;
    return 0;
}