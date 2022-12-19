#include<iostream>
#include<string.h>
#include<array>
int main(){
    int valores,num_navios,balas_canhao,coluna,linha,destruidos =0;
    int campo_naval[3][3];
    std::cout<<"Coloque um numero de navios de 0 a 9"<<std::endl;
    std::cin>>num_navios;
    std::cout<<"Vamos formar o nosso campo de batalha naval!! "<<std::endl<<"coloque os valores 0 para ter água, e 1 para navios"<<std::endl;
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            std::cout<<"Para a linha "<<i<<" e coluna "<<j<<" Digite o valor correspondente"<<std::endl;
            std::cin>>valores;
            campo_naval[i-1][j-1]= valores;
        }
    }
    std::cout<<"temos "<< num_navios<<" navios, quer ter quantas balas de canhão?"<<std::endl;
    std::cin>>balas_canhao;
    for(int m=0;m<balas_canhao;m++){
        std::cout<<"Digite a linha de 1 a 3 que você acha que está o navio"<<std::endl;
        std::cin>>linha;
        std::cout<<"Digite a coluna de 1 a 3 que você acha que está o navio"<<std::endl;
        std::cin>>coluna;
        int valor = campo_naval[linha-1][coluna-1];
        std::cout<<campo_naval[linha-1][coluna-1]<<std::endl;
        if(valor ==1){
            std::cout<<"Acertamos em cheio!!"<<std::endl;
            destruidos ++;
        }
        else{
            std::cout<<"Nao desista, ainda temos chance de ferir as tropas inimigas!!"<<std::endl;
        }
    }
     if(destruidos==num_navios){
        std::cout<<"Obrigado capitão, não conseguiriamos sem você!!"<<std::endl;
    }
    else{
        std::cout<<"Haverá outro dia para a nossa gloria!!"<<std::endl;
    }   
    
    return 0;
}