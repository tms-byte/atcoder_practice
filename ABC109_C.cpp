#include <iostream>
#include <vector>
#include <cmath>

int gcd(int x,int y){
    return (x%y)?gcd(y,x%y):y;
}

int main(){
    int N,X;
    std::cin>>N>>X;
    std::vector<int> x(N,0);
    for(int i=0;i<N;i++){
        std::cin>>x.at(i);
        x.at(i)=std::abs(x.at(i)-X);
    }
    int a,b;
    a=x.at(0);
    for(int i=1;i<N;i++){
        a=gcd(a,x.at(i));
    }
    std::cout<<a<<std::endl;
    return 0;
}