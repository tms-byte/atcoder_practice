#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string w;
    std::cin>>w;
    std::vector<int> A(26,0);
    for(int i=0;i<w.size();i++){
        A.at(w.at(i)-'a')+=1;
    }

    bool flag=true;

    for(int i=0;i<26;i++){
        if(A.at(i)%2==1){
            flag=false;
        }
    }
    if(flag){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<"No"<<std::endl;
    }
    return 0;
}