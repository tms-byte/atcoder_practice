#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main(){
    int N;
    std::cin>>N;
    std::string S;
    std::map<std::string,long long> mp;

    for(int i=0;i<N;i++){
        std::cin>>S;
        std::sort(S.begin(),S.end());
        mp[S]+=1;
    }
    long long ans=0;
    for(auto iter=mp.begin();iter!=mp.end();iter++){
        if(iter->second>=2){
            long long tmp=iter->second;
            ans+=tmp*(tmp-1)/2;
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}