#include<iostream>

//Main
int main() 
{
    //Getting Input
    int input;
    std::cout << "Please enter an integer. ";
    std::cin >> input;
    
    //Print if odd or even
    std::cout << (input % 2 ? "Odd!\n" : "Even!\n");
}
