#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <set>
#include <queue>

int H,W;
int counter=0;

int dfs(int x, int y,std::vector<std::vector<char>> V){
    //2方向を探索
    counter+=1;
    for(int dy = 0; dy <= 1; ++dy){
        int dx;
        if(dy==0){
            dx=1;
        }
        else{
            dx=0;
        }
        int nx = x + dx;
        int ny = y + dy;
        if(nx < H && ny < W && V[nx][ny] == '.'){
            dfs(nx, ny, V);
        }
    }
    return counter;
}

int main(){
    std::cin>>H>>W;
    std::vector<std::vector<char>> C(H,std::vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            std::cin>>C.at(i).at(j);
        }
    }
    int ans=dfs(0,0,C);
    std::cout<<ans<<std::endl;
    return 0;
}