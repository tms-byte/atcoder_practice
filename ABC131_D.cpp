#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<std::pair<long long,long long>>v;

    for (int i = 0; i < N; i++)
    {
        long long A,B;
        std::cin>>A>>B;
        v.push_back(std::make_pair(B,A));
    }
    std::sort(v.begin(),v.end());
    int sum=0;
    for(auto iter=v.begin();iter!=v.end();iter++){
        sum+=iter->second;
        if(sum>iter->first){
            std::cout<<"No"<<std::endl;
            return 0;
        }
    }    
    std::cout<<"Yes"<<std::endl;
    return 0;
}