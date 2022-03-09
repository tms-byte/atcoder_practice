#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double N;
    int K;
    std::cin>>N>>K;
    double sum=0;
    for(int i=1;i<=N;i++){
        long long tmp=i;
        int counter=0;
        while(tmp<=K-1){
            counter+=1;
            tmp*=2;
        }
        sum+=1/N*std::pow(0.5,counter);
    }
    std::cout<<std::setprecision(16)<<sum<<std::endl;
    return 0;
}