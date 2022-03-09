#include <iostream>

int main(){
    int N, M, X;
    int A[101];
    std::cin>>N>>M>>X;
    
    for(int i=0;i<M;i++){
        std::cin>>A[i];
    }
    int min=0;
    for (int i=0;i<X;i++){
        for(int j=0;j<M;j++){
            if(i==A[j]){
                min+=1;
            }
        }
    }
    int tmp=0;
    for (int i=X+1;i<N;i++){
        for(int j=0;j<M;j++){
            if(i==A[j]){
                tmp+=1;
            }
        }
    }
    if(min>tmp){
        min=tmp;
    }
    std::cout<<min<<std::endl;
    return 0;
}