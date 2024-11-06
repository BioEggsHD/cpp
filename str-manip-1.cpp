#include<iostream>
#include<string>
std::string rev(std::string str){
    std::string newstr="";
    for(int i=0; i<str.length(); ++i){
       newstr+=str[str.length()-i-1];
    }
    return newstr;
}
std::string lower(std::string str){
    std::string newstr="";
    for(int i=0; i<str.length(); ++i){
        newstr+=std::tolower(str[i]);
    }
    return newstr;
}
int main(){
    std::string wrd;
    std::getline(std::cin, wrd);
    std::cout<<rev(wrd)<<std::endl;
    wrd = lower(wrd);
    if(rev(wrd)==wrd){
        std::cout<<wrd<<" is a palindrome.";
    }else{std::cout<<wrd<<" is not a palindrome: "<<rev(wrd);}
    return 0;
}
