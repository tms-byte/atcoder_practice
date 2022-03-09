#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin>>N;
    std::vector<double> A(N,0),B(N,0),C(N,0);

    for(int i=0;i<N;i++){
        std::cin>>A.at(i)>>B.at(i);
    }
    double sum_t=0;
    for(int i=0;i<N;i++){
        C.at(i)=A.at(i)/B.at(i);
        sum_t+=C.at(i);
    }
    sum_t=sum_t/2.0;

    double ans=0.0;
    
    for(int i=0;i<N;i++){
        double copy=sum_t;
        sum_t=sum_t-C.at(i);
        double tmp=C.at(i);
        if(sum_t<0){
            tmp=copy;
        }
        ans+=B.at(i)*tmp;
    }
    std::cout<<ans<<std::endl;
    return 0;
}