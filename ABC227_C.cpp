#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <cmath>

int main(){
    long long N;
    std::cin>>N;

    long long ans=0;
    
    for(long long a=1;a<=4800;a++){
        long long S=std::sqrt(N/a);
        for(long long b=a;b<=S;b++){
            long long c=N/a;
            c/=b;
            if(c>=b){
                ans+=c-b+1;
            }
        }
    }
    std::cout<<ans<<std::endl;
    
    return 0;
}