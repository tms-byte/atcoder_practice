#include  <iostream>

int main(){
    long long  K,N;
    std::cin>>N>>K;

    long long tmp=0;
    tmp=N%K;
    if(tmp>(K-tmp)){
        std::cout<<K-tmp<<std::endl;
        return 0;
    }
    else{
        std::cout<<tmp<<std::endl;
        return 0;
    }
}