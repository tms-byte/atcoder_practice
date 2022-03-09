#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    std::string A,B;
    std::cin>>A>>B;
    int min;
    min=std::min(A.size(),B.size());
    
    for(int i=0;i<min;i++){
        if(A.at(A.size()-1-i)-'0'+B.at(B.size()-1-i)-'0'>9){
            std::cout<<"Hard"<<std::endl;
            return 0;
        }
    }
    std::cout<<"Easy"<<std::endl;
    return 0;
}