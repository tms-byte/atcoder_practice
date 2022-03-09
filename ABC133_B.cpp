#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int N,D;
    std::cin>>N>>D;
    std::vector<std::vector<int>> A(N,std::vector<int>(D,0));
    for(int i=0;i<N;i++){
        for(int j=0;j<D;j++){
            std::cin>>A.at(i).at(j);
        }
    }

    int ans=0;

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int sum=0;
            for(int k=0;k<D;k++){
                sum+=std::pow(A.at(i).at(k)-A.at(j).at(k),2);
            }
            for(int l=0;l<1000;l++){
                if(sum==std::pow(l,2)){
                    ans+=1;
                    break;
                }
            }
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}