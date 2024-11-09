#include <iostream>
#include <cmath>

int main()
{
    double principal, rate, Time, n;
    
    // Getting Input
    std::cout << "Enter Principal, Rate (as a decimal), and Time:\nPrincipal: ";
    std::cin >> principal;
    std::cout << "\nRate (Decimal): ";
    std::cin >> rate;
    std::cout << "\nTime (Years): ";
    std::cin >> Time;
    std::cout << "\nCompounds per year: ";
    std::cin >> n;
    
    // Input Validation
    if (!std::cin) {
        std::cerr << "Error: Invalid input, program terminated.\n";
        return 1;
    }
    
    // Simple Interest Calculation
    double simpleInterest = principal * rate * Time;
    
    // Compound Interest Calculation
    double compoundAmount = principal * std::pow((1 + rate / n), n * Time);
    double compoundInterest = compoundAmount - principal;
    
    // Output Results
    std::cout << "\n\nSimple Interest: " << simpleInterest 
              << "\n\nIf compounded " << n << " times per year:\n";
    std::cout << "Compound Amount: " << compoundAmount 
              << "\nCompound Interest: " << compoundInterest << "\n";
    
    return 0;
}
