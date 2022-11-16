#include<iostream>
#include<string.h>
#include<string>
int main(){
    
    int salario;
    std::cin>>salario;
    if(0<=salario<=1903.98){
        std::cout<<"Isento";
    }
    else if(1903.99<=salario<=2816.65){
        std::cout<<"7,5%";
    }
    else if(2816.66<=salario<=3751.05){
        std::cout<<"15.0%";
    }
    else if(3751.06<=salario<=4664.68){
        std::cout<<"22,5%";
    }
    else if(salario<=4664.69){
        std::cout<<"27,5%";
    }
    
  

    return 0;
}