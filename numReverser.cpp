#include<iostream>
int main()
{
    std::string input,newstr;
    std::cin >> input;
    for(int i=0; i<input.length();++i){
        newstr+=input[input.length()-i-1];
    }
    std::cout << newstr;
    return 0;
}
