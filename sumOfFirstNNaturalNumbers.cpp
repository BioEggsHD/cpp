#include<iostream>

//Main
int main(){
    int n, res;
    
    //Input
    std::cout << "Enter N: ";
    std::cin >> n;
    
    //Validation
    if(!(std::cin)){
        std::cerr << "Error: Invalid Input, Compilation Terminated.";
        return 1;
    }
    
    //Calculation
    for(int i=1; i <= n; ++i){
        res += i;
    }
    
    //Output Result
    std::cout << "Sum of first " << n << " natural numbers equals " << res << ". \n";
    return 0;
}
