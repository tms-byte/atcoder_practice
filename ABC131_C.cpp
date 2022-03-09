#include <iostream>

long long gcd(long long a, long long b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

long long lcm(long long a, long long b)
{
   return a * b / gcd(a, b);
}

int main(){
    long long A,B,C,D;
    std::cin>>A>>B>>C>>D;
    long long numA_C=0,numA_D=0,numA_CD=0;
    long long numB_C=0,numB_D=0,numB_CD=0;;
    numB_C=B/C;
    numB_D=B/D;
    numA_C=(A-1)/C;
    numA_D=(A-1)/D;
    long long CD=lcm(C,D);
    numA_CD=(A-1)/(CD);
    numB_CD=B/(CD);
    long long ans=0;
    ans=B-(numB_D-numA_D+numB_C-numA_C-(numB_CD-numA_CD))-(A-1);
    std::cout<<ans<<std::endl;
    return 0;
}