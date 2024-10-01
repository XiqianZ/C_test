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

    

    //Compare two unsigned char[16] arrays
    unsigned char array1[16] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};
    unsigned char array2[16] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F};

    if (memcmp(array1, array2, 16) == 0) {
        std::cout << "The arrays are equal." << std::endl;
    } else {
        std::cout << "The arrays are not equal." << std::endl;
    }

    unsigned char array3[16] = {0};
    unsigned char array4[16] = {0};
    if(memcmp(array3, array4, 16) == 0){
        std::cout << "The arrays are equal." << std::endl;
    }else{
        std::cout << "The arrays are not equal." << std::endl;
    }




}