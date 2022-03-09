#include <iostream>

int main(){
    int N;
    long long Y;
    std::cin>>N>>Y;
    int a=-1,b=-1,c=-1;
    for(long long i=0;i<N+1;i++){
        for(long long j=0;j<N+1;j++){
            long long tmp=N-i-j;
            if(i*10000+j*5000+1000*tmp==Y &&tmp>=0){
                a=tmp;
                b=j;
                c=i;
            }
        }
    }
    std::cout<<c<<" "<<b<<" "<<a<<std::endl;
    return 0;
}