#include<iostream>
int main(){
    int yr;
    std::cin>>yr;
    if(!(std::cin)){
        std::cout<<"Invalid input.";
        return 1;
    }
    if((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)){
        std::cout<<"Leap year!";
    } else {
        std::cout << "Not a leap year.";
    }
    return 0;
}
