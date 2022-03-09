#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int N,K,R,S,P;
    std::cin>>N>>K>>R>>S>>P;

    std::string T;
    std::cin>>T;
    std::string grp[K];
    for(int i=0;i<N;i++){
        grp[i%K]+=T[i];
    }
    int ans=0;
    for(int k=0;k<K;k++){
        int r=0,s=0,p=0;
        if(grp[k][0]=='r') p=P;
        if(grp[k][0]=='s') r=R;
        if(grp[k][0]=='p') s=S;

        int n=grp[k].size();
        for(int i=1;i<n;i++){
            int rr=std::max(s,p);
            int ss=std::max(r,p);
            int pp=std::max(r,s);

            if(grp[k][i]=='r') pp+=P;
            if(grp[k][i]=='s') rr+=R;
            if(grp[k][i]=='p') ss+=S;

            r=rr;
            p=pp;
            s=ss;
        }
        ans+=std::max({r,s,p});
    }
    std::cout<<ans<<std::endl;
    return 0;
}