#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> A(N,0);
    for(int i=0;i<N;i++){
        std::cin>>A.at(i);
    }
    long long sum=0;
    int x=0;
    for(int i=0;i<N;i++){
        sum+=std::abs(x-A[i]);
        x=A[i];
    }
    sum+=std::abs(x);
    
    for(int i=0;i<N;i++){
        int a=0;
        if(i){
            a=A[i-1];
        }
        int b=A[i];
        int c=0;
        if(i!=N-1){
            c=A[i+1];
        }
        long long ans=sum;
        ans-=std::abs(a-b);
        ans-=std::abs(b-c);
        ans+=std::abs(a-c);
        std::cout<<ans<<std::endl;
    }
    return 0;
}