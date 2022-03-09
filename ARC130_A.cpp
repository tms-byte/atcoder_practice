#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>

int main(){
    int N;
    std::cin>>N;
    std::string S;
    std::cin>>S;
    std::vector<long long> v;
    long long counter=1;
    for(int i=0;i<S.size();i++){
        if(S[i]==S[i+1]){
            counter++;
        }
        else if(S[i]!=S[i+1]){
            v.push_back(counter);
            counter=1;
        }
    }
    long long ans=0;
    for(int i=0;i<v.size();i++){
        ans+=v[i]*(v[i]-1)/2;
    }
    std::cout<<ans<<std::endl;
    return 0;
}