#include<iostream>
int factorial(int n){
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main(){
    std::cout<<factorial(10);
  return 0;
}
