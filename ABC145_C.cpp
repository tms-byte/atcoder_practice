#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iomanip>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> v(N);
    std::vector<double> x(N,0);
    std::vector<double> y(N,0);
    
    long double sum=0.0;

    for(int i=0;i<N;i++){
        v.at(i)=i;
        std::cin>>x.at(i)>>y.at(i);
    }

    do{
        for(int i=0;i<N-1;i++){
            double dx=x.at(v[i])-x.at(v[i+1]);
            double dy=y.at(v[i])-y.at(v[i+1]);
            sum+=std::pow(dx*dx+dy*dy,0.5);
        }
    }
    while(std::next_permutation(v.begin(),v.end()));
    
    for(int i=0;i<N;i++){
        sum=sum/(i+1);
    }
    std::cout<<std::setprecision(10)<<sum<<std::endl;
    return 0;
}