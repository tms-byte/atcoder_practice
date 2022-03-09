#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N,M;
    std::cin>>N>>M;
    std::map<int,int> mp;
    std::map<int,int> mp2;
    for(int i=1;i<=N;i++){
        mp[i]=0;
        mp2[i]=0;
    }
    for(int i=0;i<M;i++){
        int tmp,tmp2;
        std::cin>>tmp>>tmp2;
        mp[tmp]+=1;
        mp[tmp2]+=1;
    }
    for(int i=0;i<M;i++){
        int tmp,tmp2;
        std::cin>>tmp>>tmp2;
        mp2[tmp]+=1;
        mp2[tmp2]+=1;
    }

    for(auto ite=mp.begin();ite!=mp.end();ite++){
        for(auto ite2=mp2.begin();ite2!=mp2.end();ite2++){
            if(ite->second==ite2->second){
                ite2->second=0;
                break;
            }
        }
    }
    for(auto ite2=mp2.begin();ite2!=mp2.end();ite2++){
        if(ite2->second!=0){
            std::cout<<"No"<<std::endl;
            return 0;
        }
    }
    std::cout<<"Yes"<<std::endl;
    return 0;
}