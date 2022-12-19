#include<iostream>
int main(){
    float valor;
    int cont =0;
    for(int i=0; i<6;i++){
        std::cin>>valor;
        if(valor>0){
            cont++;
        }
    }
    std::cout<<cont<<" valores positivos"<<std::endl;
    return 0;
}