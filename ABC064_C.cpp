#include <iostream>
#include <vector>
#include <map>

std::string color(int rate){
    if(rate<=399){
        return "hai";
    }
    else if(rate<=799){
        return "tya";
    }
    else if(rate<=1199){
        return "midori";
    }
    else if(rate<=1599){
        return "mizu";
    }
    else if(rate<=1999){
        return "ao";
    }
    else if(rate<=2399){
        return "ki";
    }
    else if(rate<=2799){
        return "tou";
    }
    else if(rate<=3199){
        return "aka";
    }
    else{
        return "any";
    }
}

int main(){
    int N;
    std::cin>>N;
    std::vector<int> a(N,0);

    for(int i=0;i<N;i++){
        std::cin>>a.at(i);
    }
    std::map<std::string,int> mp;

    for(int i=0;i<N;i++){
        std::string color_rate=color(a.at(i));
        mp[color_rate]+=1;
    }
    if(mp.count("any")==0){
        std::cout<<mp.size()<<" "<<mp.size()<<std::endl; 
    }
    else{
        if(mp.size()==1){
            std::cout<<mp.size()<<" "<<mp["any"]<<std::endl;
        }
        else
            std::cout<<mp.size()-1<<" "<<mp.size()-1+mp["any"]<<std::endl;
    }
    return 0;
}