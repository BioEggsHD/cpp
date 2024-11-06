#include<iostream>
#include<cmath>
bool prime(int x){
    bool res = true;
    if(x<=1){res = false;}else{
        for(int d = 2; d <= std::sqrt(x); ++d){
            if(x%d==0){
                res = false;
                break;
            } else {continue;}
        }
    }
    return res;
}
int main(){
    int num;
    std::cin>>num;
    if(prime(num)==0){
        std::cout<<num<<" isn't Prime.";
    } else{
        std::cout<<num<<" is Prime.";
    }
    return 0;
}
