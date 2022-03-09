#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    std::string S1;
    std::string S2;
    std::cin>>S1>>S2;
    if((S1[0]=='.' && S2[1]=='.') || (S1[1]=='.' && S2[0]=='.')){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
    return 0;
}