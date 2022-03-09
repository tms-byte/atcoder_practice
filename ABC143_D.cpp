#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> L(2010,0),cnt(2010,0);
    for(int i=0;i<N;i++){
        std::cin>>L.at(i);
        cnt[L.at(i)]++;
    }
    for (int i = 1; i < 2010; i++)
    {
        cnt[i]+=cnt[i-1];
    }
    long long ans=0;
    for(int a=0;a<N;a++)
        for(int b=0;b<N;b++){{if(a!=b){
            int mi=abs(L[a]-L[b]);
            int ma=L[a]+L[b];
            int cn=0;
            if(0<=ma-1){
                cn=cnt[ma-1];
            }
            cn-=cnt[mi];
            if(mi<L[a] and L[a]<ma){cn--;}
            if(mi<L[b] and L[b]<ma){cn--;}
            ans+=cn;
        }}
    }
    ans/=6;
    std::cout<<ans<<std::endl;
    return 0;
}