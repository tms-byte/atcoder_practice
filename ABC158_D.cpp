#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

int main(){
    std::string S;
    std::cin>>S;
    int Q;
    std::cin>>Q;
    std::deque<char> S_deque;
    for(auto c : S){
        S_deque.push_back(c);
    }

    bool isRev=false;

    for(int i=0;i<Q;i++){
        int T;
        std::cin>>T;
        
        if(T==2){
            int F;
            std::cin>>F;
            char C;
            std::cin>>C;
            if(F==2){
                if(!isRev){
                    S_deque.push_back(C);
                }
                else{
                    S_deque.push_front(C);
                }
            }
            else{
                if(!isRev){
                    S_deque.push_front(C);
                }
                else{
                    S_deque.push_back(C);
                }
            }
        }
        else{
            isRev=!isRev;
        }
    }
    if(isRev){
        while(!S_deque.empty()){
            std::cout<<S_deque.back();  
            S_deque.pop_back();  
        }
    }
    else{
        while (!S_deque.empty())
        {
            std::cout<<S_deque.front();
            S_deque.pop_front();
        }
        
    }
    std::cout<<std::endl;
    return 0;
}