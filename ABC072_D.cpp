#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> p(N,0);
    for(int i=0;i<N;i++){
        std::cin>>p.at(i);
    }
    int ans=0;
    for (int i = 0; i < N-1; i++)
    {   
        if(p.at(i)==i+1){
            int tmp;
            tmp=p.at(i);
            p.at(i)=p.at(i+1);
            p.at(i+1)=tmp;   
            ans++;
        }
    }
    if(p.at(N-1)==N){
        ans++;
    }
    
    std::cout<<ans<<std::endl;
    return 0;
}