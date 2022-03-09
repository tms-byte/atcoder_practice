#include  <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> num(N,0);
    std::vector<int> H(N,0);
    for(int i=0;i<N;i++){
        std::cin>>H.at(i);
    }
    int counter=0;
    num.at(0)=counter;

    for(int i=0;i<N-1;i++){
        if(H.at(i)>=H.at(i+1)){
            counter+=1;
        }
        else{
            counter=0;
        }
        num.at(i+1)=counter;
    }
    int ans=*std::max_element(num.begin(),num.end());
    std::cout<<ans<<std::endl;
    return 0;
}