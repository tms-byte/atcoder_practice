#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>

int main(){
    int N;
    std::cin>>N;
    std::map<std::string,int> st;

    for(int i=0;i<N;i++){
        int count=0;
        std::cin>>count;
        std::string S;
        std::getline(std::cin,S);
        st[S]=1;
    }
    std::cout<<st.size()<<std::endl;
    return 0;
}