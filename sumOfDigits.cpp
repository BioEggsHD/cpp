#include<iostream>
#include<string>
int main(){
    std::string input;
    std::cout<<"Enter a positive int: ";
    std::cin>>input;
    int res=0;
    for(int i=0; i<input.length();++i){
        res+=input[i]-'0';
    }
    std::cout<<"\n"<<res;
    return 0;
}
