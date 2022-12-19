#include<iostream>
void saque(){
    std::cout<<"Saque"<<std::endl;
}

void saldo(){

    std::cout<<"Saldo"<<std::endl;

}

void transferencia(){
    std::cout<<"Transferencia"<<std::endl;
} 

void pix(){
    std::cout<<"Pix"<<std::endl;
}

int main(){
    int opcao;
    std::cin>>opcao;
    while(opcao !=0)
        switch (opcao)
        {
        case 1:
            saque();
            std::cin>>opcao;
            break;
        case 2:
            saldo();
            std::cin>>opcao;
            break;
        case 3:
            transferencia();
            std::cin>>opcao;
            break;
        case 4:
            pix();
            std::cin>>opcao;
            break;
        default:
            std::cout<<"Opcao invalida"<<std::endl;
            std::cin>>opcao;
            break;
        }
    return 0;
}