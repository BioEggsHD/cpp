#include<iostream>

int main() 
{
    double num1,num2;
    
    //Getting input
    std::cout << "Please enter two numbers:\nNumber 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;
    
    //Calculations
    std::cout << "\n"<<num1 << " + "<<num2 << " = " << num1 + num2;
    std::cout << "\n"<<num1 << " - "<<num2 << " = " << num1 - num2;
    std::cout << "\n"<<num1 << " * "<<num2 << " = " << num1 * num2;
    std::cout << "\n"<<num1 << " / "<<num2 << " = " << num1 / num2;
    return 0;
}
