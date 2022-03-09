#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N,K,A;
    std::cin>>N>>K>>A;
    if(N==1){
        std::cout<<1<<std::endl;
        return 0;
    }
    if(A-1+K%N<=N){
        std::cout<<A+K%N-1<<std::endl;
    }
    else{
        std::cout<<A+K%N-1-N<<std::endl;
    }
    return 0;
}