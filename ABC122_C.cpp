#include <iostream>
#include <string>

int main(){
    std::string S;
    std::cin>>S;
    int n = S.size();
    
    int max=0;
    int tmp=0;
    for(int i=0;i<n;i++){
        if(S[i]=='A'||S[i]=='T'||S[i]=='G'||S[i]=='C'){
            tmp+=1;
        }else{
            tmp=0;
        }
        if(max<tmp){
            max=tmp;
        }
    }
    std::cout<<max<<std::endl;
    return 0;
}