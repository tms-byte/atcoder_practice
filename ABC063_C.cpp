#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> s(N,0);

    for(int i=0;i<N;i++){
        std::cin>>s.at(i);
    }    
    int dp[101][10101];
    dp[0][0]=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<10001;j++){
            if(dp[i][j]){
                dp[i+1][j]=1;
                dp[i+1][j+s[i]]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<10001;i++){
        if(i%10&&dp[N][i]){
            ans=std::max(ans,i);
        }
    }
    std::cout<<ans<<std::endl;
    return 0;
}