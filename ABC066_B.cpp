#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin>>S;

    while(S.size()>=1){
        S=S.substr(0,S.size()-1);
        if(S.size()%2==0){
            std::string S1=S.substr(0,S.size()/2);
            std::string S2=S.substr(S.size()/2,S.size()/2);
            if(S1==S2){
                std::cout<<S.size()<<std::endl;
                return 0;
            }
        }
    }
    std::cout<<"err"<<std::endl;
    return 0;
}