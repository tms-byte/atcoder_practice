#include <iostream>

int main(){
    long long X,Y;
    std::cin>>X>>Y;
    int ans=1;

    while(1){
        X=2*X;
        if(X>Y){
            break;
        }
        else{
            ans+=1;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}