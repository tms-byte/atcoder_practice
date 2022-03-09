#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    int S,T,X;
    std::cin>>S>>T>>X;
    if(S<=X&&X<T){
        std::cout<<"Yes"<<std::endl;
    }
    else if(S<=X && S>T){
    std::cout<<"Yes"<<std::endl;

    }
    else if(X<T && S>T){
        std::cout<<"Yes"<<std::endl;
    }
    else
        std::cout<<"No"<<std::endl;
    return 0;
}