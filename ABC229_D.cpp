#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <iomanip>

int main(){
    std::string S;
    int K;
    std::cin>>S>>K;
    int count=1;
    std::vector<int> X,v;
    for(int i=0;i<S.size();i++){
        if(S[i]==S[i+1]){
            count++;
        }
        else if(S[i]=='X'){
            X.push_back(count);
            count=1;
            if(i==S.size()-1){
                v.push_back(count);
            }
        }
        else if(S[i]=='.'){
            v.push_back(count);
            count=1;
            if(i==S.size()-1){
                X.push_back(count);
            }
        }
    }

    int ans=0;
    int max=0;
    for(int i=0;i<v.size();i++){
        int counter=0;
        ans=0;
        max=0;
        for(int j=i;j<v.size();j++){
            int pre=counter;
            counter+=v.at(j);
            if(counter>K){
                ans+=K-pre;
                max=std::max(max,ans);
                break;
            }
            else{
                ans+=X.at(j)+v.at(j);
            }
            max=std::max(max,ans);
        }
        
    }
    std::cout<<max<<std::endl;
    return 0;
}