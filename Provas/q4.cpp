#include<iostream>
#include<iomanip>
int main(){
    int dias;
    std::cin>>dias;std::cout<<std::setprecision(1)<<std::fixed;
    if(0<=dias<=180){  
        std::cout<<"Aliquota de IR:22.5%";

    }
    else if(181<=dias<=360){
        std::cout<<"Aliquota de IR:20.0%";
    }
    else if(361<=dias<=720){
        std::cout<<"Aliquota de IR:17.5%";
    }
    else if(dias>=721){
        std::cout<<"Aliquota de IR:15.0%";
    }
    return 0;
}