#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    int N,X;
    std::cin>>N>>X;
    std::vector<int> A(N,0);
    
    for(int i=0;i<N;i++){
        std::cin>>A.at(i);
    }
    
    std::map<int,int> mp;
    int now=X;
    int ans=0;

    for(;;){
        mp[now]+=1;
        ans+=1;
        now=A.at(now-1);
        if(mp[now]==1){
            break;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}