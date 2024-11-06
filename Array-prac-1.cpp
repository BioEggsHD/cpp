#include<iostream>
#include<vector>
int main(){
    int min,max;
    int arr[] = {2,5,7,2929,95,1};
    min=arr[0];
    max=arr[0];
    for(int num : arr){
       if(num<min){min=num;}
       if(num>max){max=num;}
    }
    std::cout<<"Smallest is "<<min<<", biggest is "<<max<<".\n";
return 0;}
