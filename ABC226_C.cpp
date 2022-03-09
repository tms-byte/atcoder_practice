#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N;
    std::cin>>N;
    std::vector<long long> T(N,0);
    std::vector<int> A[N];
    std::vector<int> K(N,0);

    for(int i=0;i<N;i++){
        std::cin>>T.at(i);
        std::cin>>K.at(i);
        for(int k=0;k<K.at(i);k++){
            int x;
            std::cin>>x;
            A[i].push_back(x-1);
        }
    }
    long long ans=0;
    
    bool used[N];
    for(int i=0;i<N;i++){
        used[i]=false;
    }
    used[N-1]=true;
    for(int i=N-1;i>=0;i--){
        if(used[i]){
            ans+=T.at(i);
            for(int j=0;j<K.at(i);j++){
                used[A[i][j]]=true;
            }
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}