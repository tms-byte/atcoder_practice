#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> c(3,std::vector<int>(3,0));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cin>>c.at(i).at(j);
        }
    }
    bool flag=false;
    if(c[0][0]+c[1][1]+c[2][2]!=c[0][1]+c[1][2]+c[2][0]
    || c[0][0]+c[1][1]+c[2][2]!=c[0][2]+c[1][0]+c[2][1]
    || c[0][2]+c[1][1]+c[2][0]!=c[0][1]+c[1][0]+c[2][2]
    || c[0][2]+c[1][1]+c[2][0]!=c[0][0]+c[1][2]+c[2][1]){
        flag=true;
    }
    if(flag){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
    return 0;
}