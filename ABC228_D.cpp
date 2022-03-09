#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    int Q;
    std::cin>>Q;
    std::vector<int> t(Q,0);
    std::vector<long long> x(Q,0);

    long long N=1048576;
    std::vector<long long>A(N,-1);

    for(int i=0;i<Q;i++){
        std::cin>>t.at(i)>>x.at(i);
    }

    for(int i=0;i<Q;i++){
        if(t.at(i)==1){
            long long h=x.at(i);
            long long id=h%N;
            while(A.at(id)!=-1){
                h+=1;
                id=h%N;
            }
            A.at(id)=x.at(i);
        }
        else if(t.at(i)==2){
            std::cout<<A.at(x.at(i)%N)<<std::endl;;
        }
    }
    return 0;
}