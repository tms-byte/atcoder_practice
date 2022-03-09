#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N,K;
    std::cin>>N>>K;
    std::vector<long long> A(N,0);
    for(int i=0;i<N;i++){
        std::cin>>A.at(i);
    }
    std::sort(A.rbegin(),A.rend());
    long long ans=0;
    while(A.size()>=K){
        int min=A.at(K-1);
        ans+=min;
        for(int i=0;i<K;i++){
            A.at(i)-=min;
        }
        for(int i=0;i<K;i++){
            if(A.at(i)==0){
                A.erase(A.begin()+i);
            }
        }
        std::sort(A.rbegin(),A.rend());
    }
    std::cout<<ans<<std::endl;
    return 0;
}