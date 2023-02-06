#include<iostream>
int main(){
    int matriz[3][3], soma[3];
    int valor =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout<<"Insira o valor para a linha: "<<i+1<<" Coluna: "<<j+1<<std::endl;
            std::cin>>valor;
            matriz[i][j] = valor;
        }   
    }
    valor =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            valor += matriz[i][j];
        }
        soma[i]=valor;
        valor =0;
    }
    for(int i=0;i<3;i++){
        std::cout<<soma[i]<<std::endl;
    }
    return 0;
}