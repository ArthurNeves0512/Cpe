#include<iostream>

int *criarVetor(int tam){
    int lista[tam];
    int v;
    for(int i=0;i<tam;i++){
        std::cout<<"Digite um valor para o elemento do vetor: "<<i+1<<std::endl;
        std::cin>>v;
        lista[i]=v;
    }
    return lista;
}
int main(){
    int tamanho;
    std::cout<<"Digite o tamanho do vetor: ";
    std::cin>>tamanho;
    int *endereco;
    endereco=criarVetor(tamanho);
    std::cout<<*endereco;
    return 0;
}