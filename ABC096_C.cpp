#include <iostream>
#include <vector>

int main(){
    int H,W;
    std::cin>>H>>W;
    std::vector<std::vector<char>> S(H,std::vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            std::cin>>S.at(i).at(j);
        }
    }
    for(int  i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S.at(i).at(j)=='#'){
                bool flagW=false;
                bool flagH=false;
                if(i!=0&&i!=H-1){
                    bool flag1=(S.at(i).at(j)==S.at(i-1).at(j));
                    bool flag2=(S.at(i).at(j)==S.at(i+1).at(j));
                    if(!flag1&&!flag2){
                        flagH=true;
                    }
                }
                else if(i==0 && H!=1){
                    bool flag=(S.at(i).at(j)==S.at(i+1).at(j));
                    if(!flag){
                        flagH=true;
                    }
                }
                else if(i==H-1 && H!=1){
                    bool flag=(S.at(i).at(j)==S.at(i-1).at(j));
                    if(!flag){
                        flagH=true;
                    }
                }
                if(j!=0&&j!=W-1){
                    bool flag1=(S.at(i).at(j)==S.at(i).at(j-1));
                    bool flag2=(S.at(i).at(j)==S.at(i).at(j+1));
                    if(!flag1&&!flag2){
                        flagW=true;
                    }
                }
                else if(j==0 && W!=1){
                    bool flag=(S.at(i).at(j)==S.at(i).at(j+1));
                    if(!flag){
                        flagW=true;
                    }
                }
                else if(i==W-1 && W!=1){
                    bool flag=(S.at(i).at(j)==S.at(i).at(j-1));
                    if(!flag){
                        flagW=true;
                    }
                }
                if(flagH&&flagW){
                    std::cout<<"No"<<std::endl;
                    return 0;
                }
            }
        }
    }
    std::cout<<"Yes"<<std::endl;
    return 0;
}