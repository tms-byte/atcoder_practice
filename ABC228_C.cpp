#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    int N,K;
    std::cin>>N>>K;
    std::vector<int> sum(N,0);
    std::vector<int> sum_s(N,0);
    for(int i=0;i<N;i++){
        int tmp1,tmp2,tmp3;
        std::cin>>tmp1>>tmp2>>tmp3;
        sum.at(i)=tmp1+tmp2+tmp3;
        sum_s.at(i)=sum.at(i);
    }
    std::sort(sum_s.rbegin(),sum_s.rend());
    for(int i=0;i<N;i++){
        if(sum.at(i)+300>=sum_s.at(K-1)){
            std::cout<<"Yes"<<std::endl;
        }
        else{
            std::cout<<"No"<<std::endl;
        }
    }
    return 0;
}