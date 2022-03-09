#include <iostream>
#include <vector>
#include <set>

int main(){
    int N;
    std::cin>>N;
    std::vector<int> A(N,0);

    for(int i=0;i<N;i++){
        std::cin>>A.at(i);
    }
    std::set<int> st;
    for(int i=0;i<N;i++){
        if(st.find(A.at(i))!=st.end()){
            st.erase(A.at(i));
        }
        else{
            st.insert(A.at(i));
        }
    }
    std::cout<<st.size()<<std::endl;
    return 0;
}