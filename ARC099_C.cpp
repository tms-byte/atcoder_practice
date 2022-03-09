#include <iostream>

int main(){
    int N,K;
    std::cin>>N>>K;

    for(int i=0;i<N;i++){
        int a;
        std::cin>>a;
    }
    int ans=1;
    if((N-K)%(K-1)==0){
        ans=(N-K)/(K-1)+1;
    }
    else if((N-K)%(K-1)!=0){
        ans=(N-K)/(K-1)+2;
    }
    std::cout<<ans<<std::endl;
    return 0;
}