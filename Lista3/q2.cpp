#include<iostream>
int main(){
    int cont =0;
    int valor;
    for (int i =0;i<5;i++){
        std::cin>>valor;
        if(valor%2 ==0){
            cont ++;
        }
    }
    std::cout<<cont<<" valores positivos"<<std::endl;
    return 0;
}