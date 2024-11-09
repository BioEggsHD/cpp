#include<iostream>

int main(){
    int num;
    std::cin >> num;
    for(int i=1; i<=num; ++i){
        std::cout<<"\n"<<i<<"*:";
        for(int j=1; j<= num; ++j){
            if(j==num){std::cout<<j*i;}else{
            std::cout<<j*i<<" ";}
        }
    }
}
