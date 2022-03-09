#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(){
    int N,K;
    std::cin>>N>>K;
    std::vector<double> E;
    for (int i = 0; i < N; i++)
    {
        double p;
        std::cin>>p;
        E.push_back((p+1.0)/2.0);
    }
    double sum=0.;
    for(int i=0;i<K;i++){
        sum+=E[i];
    }
    double max=sum;
    for (int i = K; i < N; i++)
    {
        sum+=E[i]-E[i-K];
        max=std::max(max,sum);
    }
    std::cout<<std::fixed<<std::setprecision(7)<<max<<std::endl;
    return 0;
}