#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin>>N;
    int counter=0;
    int counter2=0;
    for(int i=0;i<N;i++){
        int in;
        bool flag=false;
        std::cin>>in;
        if(in%2==0&&in%4!=0){
            ;
        }
        else if(in%4==0){
            counter+=1;
        }
        else{
            counter2+=1;
        }
    }
    if(counter+counter2==N && counter+1==counter2){
        std::cout<<"Yes"<<std::endl;
    }
    else if(counter<counter2){
        std::cout<<"No"<<std::endl;
    }
    else{
        std::cout<<"Yes"<<std::endl;
    }
    return 0;
}