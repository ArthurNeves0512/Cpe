#include<iostream>

int main(){
    float valor1,valor2;
    std::cin>>valor1>>valor2;

    bool q1 = valor1>0 && valor2>0;
    bool q2 = valor1<0 && valor2>0;
    bool q3 = valor1<0 && valor2<0;
    bool q4 = valor1>0 && valor2<0;
    bool eixoX = valor1 ==0 && valor2!=0;
    bool eixoY = valor1 !=0 && valor2==0;
    bool origem = valor1 ==0 && valor2 ==0;
    if(q1){
        std::cout<<"Q1"<<std::endl;
    }
    else if(q2){
        std::cout<<"Q2"<<std::endl;
    }
    else if(q3){
        std::cout<<"Q3"<<std::endl;
    }
    else if(q4){
        std::cout<<"Q4"<<std::endl;
    }
    else if(eixoX){
        std::cout<<"Eixo Y"<<std::endl;
    }
    else if(eixoY){
        std::cout<<"Eixo X"<<std::endl;
    }
    else{
        std::cout<<"Origem"<<std::endl;
    }
    return 0;
}