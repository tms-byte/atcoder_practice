#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int N;
    std::cin>>N;
    std::vector<std::vector<int>> A(2,std::vector<int>(N,0));

    for (size_t i = 0; i < 2; i++)
    {
        for(int j=0;j<N;j++){
            std::cin>>A.at(i).at(j);
        }
    }

    int ans=0;
    for(int i=0;i<N;i++){
        int tmp=0;
        for(int j=0;j<=i;j++){
            tmp+=A.at(0).at(j);
        }
        for(int k=i;k<N;k++){
            tmp+=A.at(1).at(k);
        }
        ans = std::max(ans,tmp);
    }
    std::cout<<ans<<std::endl;
    return 0;
}