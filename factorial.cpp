#include<iostream>
int fac(int x){
    int res=1;
    for(int i=1; i<=x;++i){
        res*=i;
    }
    return res;
}
int main(){
    int num;
    std::cin>>num;
    std::cout<<"\n"<<fac(num);
    return 0;
}
