#include "../pub/pub.hpp"

int main(){

    set<int> a = {1,2,3,4};
    set<int> b = {4,5,6};
    for(int i : a){
        b.erase(i);
    }
    for(int i : b){
        cout<<i<<endl;
    }

}