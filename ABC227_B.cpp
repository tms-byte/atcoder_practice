#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> S(N,0);

    for(int i=0;i<N;i++){
        std::cin>>S.at(i);
    }
    int ans=0;
    
    for(int n=0;n<S.size();n++){
        bool flag=false;
        for(int a=1;a<300;a++){
            for(int b=1;b<300;b++){
                if(S.at(n)==4*a*b+3*a+3*b){
                    flag=true;
                }
            }
        }
        if(flag){
            ans+=1;
        }
    }
    std::cout<<N-ans<<std::endl;
    return 0;
}