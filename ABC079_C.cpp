#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string S;
    std::cin>>S;

    int A,B,C,D;
    A=S[0]-'0';
    B=S[1]-'0';
    C=S[2]-'0';
    D=S[3]-'0';

    std::vector<int> ope(3,0);
    std::vector<char> opec(3);

    for (int i = 0; i < 2; i++){
        int tmpA=A;
        int tmpB=0;
        if(i==0){
            tmpB=tmpA+B;
        }
        else{
            tmpB=tmpA-B;
        }
        for(int j=0;j<2;j++){
            int tmpC=0;
            if(j==0){
                tmpC=tmpB+C;
            }
            else{
                tmpC=tmpB-C;
            }
            for(int k=0;k<2;k++){
                int tmpD=0;
                if(k==0){
                    tmpD=tmpC+D;
                }
                else{
                    tmpD=tmpC-D;
                }
                if(tmpD==7){
                    ope.at(0)=i;
                    ope.at(1)=j;
                    ope.at(2)=k;
                }
            }
        }
    }
    
    for(int i=0;i<3;i++){
        if(ope.at(i)==0){
            opec.at(i)='+';
        }
        else{
            opec.at(i)='-';
        }
    }
    std::cout<<A<<opec.at(0)<<B<<opec.at(1)<<C<<opec.at(2)<<D<<"=7"<<std::endl;
    return 0;
}