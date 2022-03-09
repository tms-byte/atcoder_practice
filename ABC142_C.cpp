#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> A(N,0);
    std::vector<int> ANS(N,0);
    
    for(int i=0;i<N;i++){
        std::cin>>A.at(i);
    }
    for(int i=0;i<N;i++){
        ANS.at(A.at(i)-1)=i;
    }
    for(int i=0;i<N;i++){
        std::cout<<ANS.at(i)+1<<' ';
    }
    std::cout<<std::endl;
    return 0;
}