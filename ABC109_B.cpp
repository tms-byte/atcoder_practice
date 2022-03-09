#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

int main(){
    int N;
    std::cin>>N;
    std::vector<std::string> S(N);

    for(int i=0;i<N;i++){
        std::cin>>S[i];
    }
    std::set<std::string> s;
    s.insert(S[0]);

    for(int i=1;i<N;i++){
        if(S[i-1].back()!=S[i][0]){
            std::cout<<"No"<<std::endl;
            return 0;
        }
        if(s.count(S[i])){
            std::cout<<"No"<<std::endl;
            return 0;
        }
        s.insert(S[i]);
    }
    std::cout<<"Yes"<<std::endl;
    return 0;
}