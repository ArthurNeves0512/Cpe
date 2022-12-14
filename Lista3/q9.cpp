#include<iostream>
#include<iomanip>
int main(){
    int v1;
    std::cin>>v1;
    float x,y,z;
    float media;
    std::cout<<std::setprecision(1)<<std::fixed;
    for(int i=0;i<v1;i++){
        std::cin>>x>>y>>z;
        media = (x*2 + y*3 + z*5)/10;
        std::cout<<media<<std::endl;
    }

    return 0;
}