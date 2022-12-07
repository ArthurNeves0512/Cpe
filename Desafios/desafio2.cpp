#include<iostream>
#include<string.h>
int main(){
    int id, numeroVoo;
    char companhia[8];
    std::cin>>id>>numeroVoo;
    
    switch ((id,numeroVoo))
    {
    case (1,250):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Latam"<<std::endl;
        std::cout<<"Portão de embarque: 22"<<std::endl;
        break;
    
    case((2,500)):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Gol"<<std::endl;
        std::cout<<"Portão de embarque: 6"<<std::endl;
        break;
    case(3,12):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Azul"<<std::endl;
        std::cout<<"Portão de embarque: 15"<<std::endl;
        break;
    case(1,222):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Latam"<<std::endl;
        std::cout<<"Portão de embarque: 22"<<std::endl;
        break;
    case(3,11):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Azul"<<std::endl;
        std::cout<<"Portão de embarque: 14"<<std::endl;
        break;
    case(2,501):
        std::cout<<"Numero do voo: "<<id<<std::endl;
        std::cout<<"Companhia aerea: Gol"<<std::endl;
        std::cout<<"Portão de embarque: 7"<<std::endl;
        break;
    default:
    std::cout<<"Voo inexistente"<<std::endl;
        break;
    }

    return 0;
}