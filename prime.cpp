#include<iostream>
#include<cmath>
#define print std::cout
bool prime(int x){
    bool res = true;
    if(x==1){return false;}
    if(x==2){return true;}
    for(int i=2; i<=std::sqrt(x);++i){
        if(x%i==0){
            res= false;
            break;
        }
    }
   return res; 
}
int main(){
    int input;
    std::cin >> input;
    print << prime(input);
    return 0;
}
