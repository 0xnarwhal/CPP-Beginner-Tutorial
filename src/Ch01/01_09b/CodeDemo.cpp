// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Your Name: " << std::flush; // This does not append a newline character

    std::string userName; // Initialize a string variable

    std::cin >> userName; // This will read the input until a space is found

    std::cout << "Hello, " << userName << "!" << std::endl; // This will print the user's name

    std::cout << std::endl << std::endl; // This would print two blank lines
    return 0;
}