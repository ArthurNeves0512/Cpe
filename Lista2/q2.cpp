#include<iostream>


int main(){
    double valor;
    std::cin>>valor;
    if(0<=valor && valor<=25){
        std::cout<<"Intervalo [0,25]"<<std::endl;
    }
    else if(25<=valor && valor<=50){
        std::cout<<"Intervalo (25,50]"<<std::endl;
    }
    else if(50<=valor && valor<=75){
        std::cout<<"Intervalo (50,75]"<<std::endl;
        
    }
    else if(75<=valor && valor<=100){
        std::cout<<"Intervalo (75,100]"<<std::endl;
    }
    else{
        std::cout<<"Fora de intervalo"<<std::endl;
    }
    return 0;
}