#include  <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<float> v(N,0);
    for(int i=0;i<N;i++){
        std::cin>>v.at(i);
    }
    std::sort(v.begin(),v.end());
    
    float ans =v.at(0);
    for(int i=1;i<N;i+=1){
        ans+=v.at(i);
        ans = ans/2.0;
    }
    std::cout<<ans<<std::endl;
    return 0;
}