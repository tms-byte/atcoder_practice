#include <iostream>
#include <vector>

int main(){
    int N;
    int T;
    std::cin>>N>>T;
    std::vector<int> t(N,0);
    for(int i=0;i<N;i++){
        std::cin>>t.at(i);
    }
    long long ans=0;
    for(int i=0;i<N-1;i++){
        if(t.at(i+1)-t.at(i)<T){
            ans+=t.at(i+1)-t.at(i);
        }
        else if(t.at(i+1)-t.at(i)>=T){
            ans+=T;
        }
    }
    ans+=T;
    std::cout<<ans<<std::endl;
    return 0;
}