#include<iostream>
int main(){
    int num1,num2;
    std::string type;
    std::cout<<"Please input your numbers.\n";
    std::cin>>num1;
    std::cin>>num2;
    std::cout<<"Addition, Subtraction, Multiplication or Division?\n(A/S/M/D)\n";
    std::cin>>type;
    if(type=="A"||type=="a"){
        std::cout<<num1<<" + "<<num2<<" = "<<num1+num2<<".\n";
    }else if(type=="S"||type=="s"){
       std::cout<<num1<<" - "<<num2<<" = "<<num1-num2<<".\n";
    }else if(type=="M"||type=="m"){
        std::cout<<num1<<" • "<<num2<<" = "<<num1*num2<<".\n";
        
    }else if(type=="D" || type=="d"){
        std::cout<<num1<<" \\ "<<num2<<" = "<<(static_cast<double>(num1)/num2);
    }else{std::cerr<<"Please input 2 integers and enter a valid type.";}
    
return 0;}
