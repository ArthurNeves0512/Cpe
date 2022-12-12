#include<iostream>

int main(){
    int opcao ;
    std::cin>>opcao;
    while(opcao!=0){

        switch (opcao)
        {
        case 1:
            std::cout<<"Saque"<<std::endl; 
            break;
        case 2:
            std::cout<<"Saldo"<<std::endl; 
            break;
        case 3:
            std::cout<<"Transferencia"<<std::endl; 
            break;
        case 4:
            std::cout<<"Pix"<<std::endl; 
            break;
        default:
            std::cout<<"Opcao indisponível.Favor inserir um valor entre 0 e 4"<<std::endl; 
            break;
        }
        std::cin>>opcao;
        
    }
    std::cout<<"Programa Finalizado"<<std::endl;

    return 0;
}