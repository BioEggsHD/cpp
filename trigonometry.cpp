#include<iostream>
#define pi 3.14159
using namespace std;
double power(double x, int y){
    double res=1;
    for(int i=1;i<=y;++i){
        res*=x;
    }
    return res;
}
double fac(int x){
    return (x<=1)?1:x*fac(x-1);
}
double sine(double x){
    double res=0;
    for(int n=0;n<101;++n){
        res+=(power(-1,n)*power(x,2*n+1))/fac(2*n+1);
    }
    return res;
}
double cosine(double x){
    double res=0;
    for(int n=0;n<101;++n){
        res+=(power(-1,n)*power(x,2*n))/fac(2*n);
    }
    return res;
}
double tangent(double x){
    return sine(x)/cosine(x);
}
int main(){
    double in;
    cin>>in;
    cout<<"sin("<<in<<") = "<<sine(in)<<"\ncos("<<in<<") = "<<cosine(in)<<"\ntan("<<in<<") = "<<tangent(in)<<endl;
    return 0;
}
