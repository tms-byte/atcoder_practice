#include <iostream>

int main(){
    int X;
    std::cin>>X;
    while(X<110000){
        if(X==2){
            std::cout<<X<<std::endl;
            return 0;
        }
        for(int j=2;j<X;j++){
            if(X%j==0){
                break;
            }
            if(j==X-1){
                std::cout<<X<<std::endl;
                return 0;
            }
        }
        X+=1;
    }
    std::cout<<"err"<<std::endl;
    return 0;
}