#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    std::string S;
    std::string T;
    std::cin>>S>>T;
    
    int pre=S[0]-T[0];
    if(pre<0){
        pre+=26;
    }
    for(int i=1;i<S.size();i++){
        int tmp=S[i]-T[i];
        if(tmp<0){
            tmp+=26;
        }
        if(tmp!=pre){
            std::cout<<"No"<<std::endl;
            return 0;
        }
        else{
            pre=tmp;
        }
    }
    std::cout<<"Yes"<<std::endl;
    return 0;
}