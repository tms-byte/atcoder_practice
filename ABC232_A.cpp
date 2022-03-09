#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    std::string S;
    std::cin>>S;
    int a=S.at(0)-'0';
    int b=S.at(2)-'0';
    std::cout<<a*b<<std::endl;
    return 0;
}