#include <iostream>
#include <vector>

int main(){
    int X;
    std::cin>>X;
    if(X==0){
        std::cout<<"No"<<std::endl;
        return 0;
    }
    if(X%100==0){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<"No"<<std::endl;
    }
    return 0;
}