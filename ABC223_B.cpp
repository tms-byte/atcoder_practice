#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    std::string S,SH;
    std::vector<std::string> SA;
    std::cin>>S;
    for(int j=0;j<S.size();j++){
        for(int i=0;i<S.size();i++){
            if(i!=S.size()-1)
                SH.at(i+1)=S.at(i);
            else
                SH.at(0)=S.at(i);
        }
        SA.push_back(SH);
    }
    std::sort(SA.begin(),SA.end());
    std::cout<<SA.at(1).at(1)<<std::endl;
    return 0;
}