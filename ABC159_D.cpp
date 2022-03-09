#include <iostream>
#include <map>
#include <vector>

int main(){
    int N;
    std::cin>>N;
    std::map<int,int> mp;
    std::vector<int> A;
    for(int i=0;i<N;i++){
        int a;
        std::cin>>a;
        A.push_back(a);
        mp[a]+=1;
    }
    long long sum=0;
    for(auto iter=mp.begin();iter!=mp.end();iter++){
        long long tmp=iter->second;
        sum+=tmp*(tmp-1)/2;
    }
    for(int i=0;i<N;i++){
        int tmp=mp[A[i]];
        long long tmp_sum=sum;
        tmp_sum-=tmp*(tmp-1)/2;
        tmp_sum+=(tmp-1)*(tmp-2)/2;
        std::cout<<tmp_sum<<std::endl;
    }
    return 0;
}