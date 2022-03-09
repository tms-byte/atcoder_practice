#include <iostream>
#include <cmath>

int main(){
    int A,B;
    std::cin>>A>>B;
    for (int i = 0; i < 10001; i++)
    {
        int a= i*8/100;
        int b= i*10/100;
        if(a==A && b==B){
            std::cout<<i<<std::endl;
            return  0;
        }
    }
    std::cout<<-1<<std::endl;
    return 0;
}