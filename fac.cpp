#include<iostream>
int fac(int x){
    //Recursive
    return (x<=1)?1:x*fac(x-1);
}
int fac2(int x){
    //Non-Recursive
    int res=1;
    for(int i=2;i<=x;++i){
        res*=i;
    }
    return res;
}
int main(){
    std::cout << fac(5)<<"\n"<<fac2(5);
    return 0;
}
