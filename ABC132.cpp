#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> d(N,0);

    for (int i=0;i<N;i++){
        std::cin>>d.at(i);
    }
    std::sort(d.begin(),d.end());
    int ans = d.at(N/2)-d.at(N/2-1);
    std::cout<<ans<<std::endl;
    return 0;
}