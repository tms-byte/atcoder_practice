#include <iostream>

int main(){
    int N;
    std::cin>>N;
    long long sum=0;
    for(int i=0;i<N-1;i++){
        sum+=i+1;
    }
    std::cout<<sum<<std::endl;
    return 0;
}