#include<iostream>
#include<array>
#include<algorithm>
#include <functional>
struct Pessoas{
    std::string nome;
    int idade;
    std::string status;
    std::string endereco;
    std::string telefone;
};
Pessoas * cadastrar_pessoas(Pessoas* lista_pessoas){ 
    for(int i=0;i<5;i++){
        std::string palavra;
        int num;
        std::cout<<"Insira o Nome"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin, palavra);
        (lista_pessoas+i)->nome = palavra;
        std::cout<<palavra<<std::endl;
        std::cout<<(*lista_pessoas).nome<<std::endl;
        std::cout<<"Insira a idade"<<std::endl;
        std::cin>>num;
        std::cin.ignore();
        (lista_pessoas+i)->idade = num;
        std::cout<<"Insira o Status Civil"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin, palavra);
        (lista_pessoas+i)->status = palavra;
        std::cout<<"Insira o Endereço atual"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin, palavra);
        (lista_pessoas+i)->endereco = palavra;
        std::cout<<"Insira o telefone para contato"<<std::endl;
        std::cin.ignore();
        std::getline(std::cin, palavra);
        (lista_pessoas+i)->telefone = palavra;
        
    }
    std::cout<<(*lista_pessoas).nome<<std::endl;
    return lista_pessoas;
 };
int main(){ 
    Pessoas lista_pessoas[5] ;
    Pessoas * pointer;
    pointer = cadastrar_pessoas(lista_pessoas);
    return 0;
}
