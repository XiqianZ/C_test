#include "../pub/pub.hpp"
#include<cstring>


struct DataStruct {
    int a;
    int b;
    int c;
};

int main(){
    cout<<"Hello World"<<endl;

    DataStruct data;
    data.a = 100;
    data.b = 200; 
    data.c = 300;

    char* p = new char[sizeof(DataStruct)];
    
    std::memcpy(p, &data, sizeof(DataStruct));
    // std::copy(reinterpret_cast<char*>(&data), reinterpret_cast<char*>(&data) + sizeof(DataStruct), p);

    char fourthToEighthChar[4];
    std::memcpy(fourthToEighthChar, p + 4, 4);
    // fourthToEighthChar[4] = '\0';
    int value = *reinterpret_cast<int*>(fourthToEighthChar);
    std::cout << "4th to 7th char of p (as int): " << value << std::endl;

    DataStruct newData = *reinterpret_cast<DataStruct*>(p);
    cout << "newData->a: " << newData.a << endl;
    cout << "newData->b: " << newData.b << endl;


}