#include "../pub/pub.hpp"


string convertToTitle(int columnNumber){
    string result = "";
    while(columnNumber >0){
        columnNumber --;
        result = char(columnNumber % 26 + 'A') + result;
        columnNumber/=26;
    }     
    return result;
}


int main(){
    cout<<"Hello World"<<endl;

    return 0;
}   