#include<iostream>
//Without <cmath>
double power(double x, int y){
    double res=1;
    for(int i=1;i<=y;++i){
        res*=x;
    }
    return res;
}
int main(){
    double x;
    int y;
    std::cout << "Enter 2 numbers: \nNum 1: ";
    std::cin >> x;
    std::cout << "\nNum 2 (Int): ";
    std::cin >> y;
    if(!(std::cin)){
        std::cerr << "Invalid Input, Compilation Terminated.";
        return 1;
    }
    std::cout << x << " to the power of " << y << " equals " << power(x,y) << "\n";
    return 0;
}
