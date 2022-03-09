#include <iostream>
#include <string>

int main(){
    std::string S;
    long long K;
    std::cin>>S;
    std::cin>>K;
    
    bool flag=false;
    char reg;
    for(int i=0;i<K;i++){
        if(S[i]!='1'){
            flag=true;
            reg=S[i];
            break;
        }
    }

    if(flag){
        std::cout<<reg<<std::endl;
    }
    else{
        std::cout<<1<<std::endl;
    }

    return 0;
}