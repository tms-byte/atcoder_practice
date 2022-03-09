#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    int N;
    long long W;
    std::cin>>N>>W;
    std::vector<std::pair<long long,long long>> v(N);
    for(int i=0;i<N;i++){
        long long A,B;
        std::cin>>A>>B;
        v.push_back(std::make_pair(A,B));
    }
    std::sort(v.rbegin(),v.rend());
    long long count=0;
    int id=0;
    long long ans=0;
    while (count<W && id<N)
    {
        long long pre = count;
        count+=v.at(id).second;
        if(count<=W){
            ans+=v.at(id).first*v.at(id).second;
        }
        else{
            long long res=W-pre;
            ans+=v.at(id).first*res;
        }
        id+=1;
    }

    std::cout<<ans<<std::endl;
    return 0;
}