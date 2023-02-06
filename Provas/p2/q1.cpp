#include<iostream>
#include<string>
#include<array>

int main(){
     std::string vetor[11] = {"Lapis", "Resma de Papel","Borracha","Caderno 10 Materias", "Borracha", "Lapis de Cor", "Giz de Cera",
     "Estojo", "Apontador", "Regua"};
     std::string palavra;
     int igual =0;
     std::getline(std::cin, palavra);
     for(int i=0;i<11;i++){
        std::cout<<vetor[i]<<std::endl;
        if (palavra == vetor[i]){
            igual =1;
        }
     }
     if(igual){
        std::cout<<"Item encontrado";
     }
     else{
        std::cout<<"Item inexistente";
     }
    return 0;
}