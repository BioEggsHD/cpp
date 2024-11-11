#include<iostream>
int main(){
    int h,w;
    char _char;
    std::cout << "Enter height:";
    std::cin >> h;
    std::cout << "\nEnter width:";
    std::cin >> w;
    std::cout << "\nEnter a character:";
    std::cin >> _char;
    if(!(std::cin)){
        std::cout<<"Invaild input.\n";
        return 1;
    }
    for(int i=1; i<=h; ++i){
        for(int j=1;j<=w; ++j){
            std::cout << _char<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
