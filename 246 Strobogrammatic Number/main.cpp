#include "../pub/pub.hpp"



bool isStrobogrammatic(string num){
    unordered_map<char, char> map = {{'0','0'}, {'1','1'}, {'6','9'},{'8','8'},{'9','6'}};
    int i = 0; 
    int j = num.size()-1;
    while(i<=j){
        if(map[num[i]] != num[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}




int main(){
    cout<<"Hello World"<<endl;

    string num = "69";
    cout<<isStrobogrammatic(num)<<endl;


    return 0;
}