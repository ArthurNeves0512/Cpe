#include<iostream>
#include<string>
#include<string.h>
int main(){
    std::string entrada,entrada2,entrada3;
    std::cin>>entrada>>entrada2>>entrada3;

    if(entrada =="vertebrado"){
        if(entrada2=="ave"){
            if(entrada3=="carnivoro"){
                std::cout<<"aguia"<<std::endl;
            }
            else if(entrada3=="onivoro"){
                std::cout<<"pomba"<<std::endl;
            }

        }
        else if(entrada2=="mamifero"){
            if(entrada3=="herbivoro"){
                std::cout<<"vaca"<<std::endl;
            }
            else if(entrada3=="onivoro"){
                std::cout<<"homem"<<std::endl;
            }
        }

    }
    else if(entrada=="invertebrado"){
        if(entrada2 =="inseto"){
            if(entrada3=="hematofago"){
                std::cout<<"pulga"<<std::endl;
            }
            else if(entrada3=="herbivoro"){
                std::cout<<"lagarta"<<std::endl;
            }

        }
        else if(entrada2=="anelideo"){
            if(entrada3=="hematofago"){
                std::cout<<"sanguessuga"<<std::endl;
            }
            else if(entrada3=="onivoro"){
                std::cout<<"minhoca"<<std::endl;
            }
        }
    }
    return 0;

    
}