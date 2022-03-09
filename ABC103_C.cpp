#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> a(N,0);

    for(int i=0;i<N;i++){
        std::cin>>a.at(i);
    }
    int ans=0;
    for (int i = 0; i < N; i++)
    {
        ans+=a.at(i)-1;
    }
    std::cout<<ans<<std::endl;
    return 0;
}