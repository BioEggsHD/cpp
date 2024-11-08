#include<iostream>
#define pi 3.1415926
int fac(int x){ //works
    int res=1;
    for(int i=2;i<=x;++i){
        res*=i;
    }
    return res;
}
int fac2(int x){ //works
    return (x==1||x<=0)? 1 : fac2(x-1) * x;
}
double power(double x, int y) { // works
    double res = 1;
    if (y >= 0) {
        for (int i=1;i<=y;++i) {
            res *= x;
        }
    }else{
        for(int i=1;i<=-y;++i) {
            res *= x;
        }
        res = 1 / res;
    }
    return res;
}
double sine(double x){
    double res=0;
    for(int n=0; n<11; n++){
       res+=(power(-1,n)*power(x,(2*n)+1)) / fac((2*n)+1);
    }
    return res;
}
double cosine(double x){ 
    double res=0;
    for(int n=0; n<11; n++){
       res+=(power(-1,n)*power(x,(2*n))) / fac((2*n));
    }
    return res;
}
double tang(double x){
    return sine(x)/cosine(x);
}
double ctang(double x){
    return cosine(x)/sine(x);
}
double sec(double x){
    return 1/cosine(x);
}
double csc(double x){
    return 1/sine(x);
}
float rad(float x){
    return x*(pi/180);
}
double deg(double x){
    return x*(180/pi);
}
using namespace std;
int main(){
    return 0;
}
