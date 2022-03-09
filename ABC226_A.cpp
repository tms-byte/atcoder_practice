#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    double N;
    int ans=0;
    std::cin>>N;
    if(N-int(N)>=0.5){
        ans=int(N)+1;
    }
    else{
        ans=int(N);
    }
    std::cout<<ans<<std::endl;
    return 0;
}