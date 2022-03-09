#include <iostream>
#include <vector>
#include <set>
#include <tuple>
#include <stack>

int main(){
    long long H,W,Q;
    int C;
    std::cin>>H>>W>>C>>Q;

    long long ans=0;
    std::vector<std::tuple<long long,char,int>> D;
    for(int i=0;i<Q;i++){
        int t;
        long long n;
        int c;
        std::cin>>t>>n>>c;
        if(t){
            D.push_back(std::make_tuple(n,'W',c));
        }
        else{
            D.push_back(std::make_tuple(n,'H',c));
        }
    }
    for(int i=0;i<Q;i++){

    }

    for(int i=0;i<C;i++){

    }
}