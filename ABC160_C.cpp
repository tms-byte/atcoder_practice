#include <iostream>
#include <vector>

int main(){
    long long K,N;
    std::cin>>K>>N;
    std::vector<long long> A(N,0);

    for (long long n=0;n<N;n++){
        std::cin>>A.at(n);
    }

    long long ans = A.at(N-1)-A.at(0);
    for (long long i=1;i<N;i++){
        long long tmp=0;
        tmp+=K-A.at(i);
        tmp+=A.at(i-1);
        if(tmp<ans){
            ans=tmp;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}