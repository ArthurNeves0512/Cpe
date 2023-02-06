#include<iostream>
int somaPositivos(int *vetor){
    int positivos=0;
    for(int i=0;i<5;i++){
        if(*(vetor+i)>=0){
            positivos += *(vetor+i);
        }
    }
   return positivos;
}
int somaNegativos(int *vetor){
    int negativos=0;
    for(int i=0;i<5;i++){
        if(*(vetor+i)<0){
            negativos += *(vetor+i);
        }
    }
   return negativos;
}

int main(){
    int opcao,valor;
    int numeros[5];

    for(int i=0;i<5;i++){
        std::cin>>valor;
        numeros[i] = valor;
    }
    std::cout<<"Selecione o que voce quer fazer "<<std::endl;
    std::cout<<"1 - Somar numeros positivos "<<std::endl;
    std::cout<<"2 - Somar numeros negativos "<<std::endl;
    std::cout<<"3 - Sair "<<std::endl;
    std::cin>>opcao;
    switch (opcao)
    {
    case 1:
        std::cout<<"A soma de numeros positivos eh "<<somaPositivos(numeros)<<std::endl;
        break;
    case 2:
        std::cout<<"A substracao de numeros negativos eh "<<somaNegativos(numeros)<<std::endl;
        break;
    case 3:
        break;
    default:
        std::cout<<"Opcao invalida"<<std::endl;
    }
    return 0;
}