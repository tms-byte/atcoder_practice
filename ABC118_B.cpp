#include <iostream>
#include <vector>


int main(){
    int N,M;
    std::cin>>N>>M;
    std::vector<int> A(M,0);

    for(int i=0;i<N;i++){
        int K;
        std::cin>>K;
        for (int j = 0; j < K; j++)
        {
            int in=0;
            std::cin>>in;
            A.at(in-1)+=1;
        }
    }

    int ans=0;
    for(int i=0;i<M;i++){
        if(A.at(i)==N){
            ans+=1;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}