#include<iostream>
int main(){
    int v1=0,posicao=1,v2;
    for(int i=1;i<101;i++){
        std::cin>>v2;
        if(v2>v1){
            v1 = v2;
            posicao = i;
        }
    }
    std::cout<<v1<<std::endl<<posicao<<std::endl;
    return 0;
}