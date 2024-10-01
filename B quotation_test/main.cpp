#include "../pub/pub.hpp"


int main(){
    char c1 = 'A'; // Character literal
    // char c1 = "A"; // Error, a Character literal should be enclosed in single quotes
    const char* str1 = "AHello"; // String literal

    // Accessing individual characters:
    char c2 = str1[0]; // Access the first character of the string

    // Comparing characters:
    if (c1 == str1[0]) {
        std::cout << "The first character of the string is 'A'." << std::endl;
    }

    return 0;
}