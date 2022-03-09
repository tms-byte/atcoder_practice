#include <iostream>
#include <set>

int main(){
    int A,B,K;
    std::cin>>A>>B>>K;
    
    if(K>B-A){
        if(A==B){
            K=1;
        }
        else{
            K=B-A;
        }
    }
    std::set<int> s;
    for(int i=A;i<A+K;i++){
        s.insert(i);
    }
    for(int i=B-K+1;i<=B;i++){
        s.insert(i);
    }
    for(auto x : s){
        std::cout<<x<<std::endl;
    }
    return 0;
}