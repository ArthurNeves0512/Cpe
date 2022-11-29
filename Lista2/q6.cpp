#include<iostream>
#include<iomanip>
int main(){
    double salario;
    std::cin>>salario;
    std::cout<<std::fixed<<std::setprecision(2);
    if(0<=salario && salario<=400.00){
        std::cout<<"Novo salario: "<< salario + salario*0.15<<std::endl;
        std::cout<<"Reajuste ganho: "<<salario*0.15<<std::endl;
        std::cout<<"Em percentual: 15 %"<<std::endl;
    }
    else if(400.01<=salario && salario<=800.00){
        std::cout<<"Novo salario: "<< salario + salario*0.12<<std::endl;
        std::cout<<"Reajuste ganho: "<<salario*0.12<<std::endl;
        std::cout<<"Em percentual: 12 %"<<std::endl;
    }
    else if(800.01<=salario && salario<=1200.00){
        std::cout<<"Novo salario: "<< salario + salario*0.10<<std::endl;
        std::cout<<"Reajuste ganho: "<<salario*0.10<<std::endl;
        std::cout<<"Em percentual: 10 %"<<std::endl;
    }
    else if(1200.01<=salario && salario<=2000.00){
        std::cout<<"Novo salario: "<< salario + salario*0.07<<std::endl;
        std::cout<<"Reajuste ganho: "<<salario*0.07<<std::endl;
        std::cout<<"Em percentual: 7 %"<<std::endl;
    }
    else if(2000.01<=salario){
        std::cout<<"Novo salario: "<< salario + salario*0.04<<std::endl;
        std::cout<<"Reajuste ganho: "<<salario*0.04<<std::endl;
        std::cout<<"Em percentual: 4 %"<<std::endl;
    }
    
    return 0;
}