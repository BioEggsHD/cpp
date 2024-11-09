#include<iostream>

//Main
int main() 
{
    double n1,n2;
    
    //Getting Input
    std::cout << "Please enter two numbers:\nNumber 1:";
    std::cin >> n1;
    std::cout << "\nNumber 2: ";
    std::cin >> n2;
    
    //Input Validation
    if(!(std::cin))
    {
        std::cerr << "Error: Please enter two valid numbers. Compilation terminated.\n";
        return 1;
    }
    
    //Solution
    std::cout << "Out of " << n1 << " and " << n2 << ", " << std::max(n1,n2) << " is the bigger number and " << std::min(n1,n2) << " the smaller one.\n";
    return 0;
}
