#include <iostream>
#include <vector>
#include <set>
#include  <utility>

int main(){
    int N,M;
    std::cin>>N>>M;
    std::set<int> A;
    std::set<int> B;
    
    for(int i=0;i<M;i++){
        int a,b;
        std::cin>>a>>b;
        a--;b--;
        if(a==0){
            A.insert(b);
        }
        else if(b==0){
            A.insert(a);
        }
        else if(a==N-1){
            B.insert(b);
        }
        else if(b==N-1){
            B.insert(a);
        }
    }
    bool flag=false;
    for(int i=0;i<N;i++){
        if(A.count(i)==1&&B.count(i)==1){
            flag =true;
        }
    }
    if(flag){
        std::cout<<"POSSIBLE"<<std::endl;
    }
    else{
        std::cout<<"IMPOSSIBLE"<<std::endl;
    }
    return 0;
    
}