#include<iostream>
#include<iomanip>
int main(){
    float humidades[7];
    int indice_maior =0,indice_menor=0;
    float valor,maior=0,menor=99999;
    double media=0;
    for(int i=0;i<7;i++){
        std::cin>>valor;
        humidades[i] = valor;
        media +=valor;
    }
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout<<"a humidade media na semana foi de "<<media/7<<" %"<<std::endl;
    for(int i=0;i<7;i++){
        if(humidades[i]<menor){
            menor = humidades[i];
            indice_menor =i;
        }
        if(humidades[i]>maior){
            maior = humidades[i];
            indice_maior =i;
        }
    }
    std::cout<<"O dia mais humido foi o "<<indice_maior+1<<" ,com humidade de : "<<maior<<" %"<<std::endl;
    std::cout<<"O dia mais seco foi o "<<indice_menor+1<<" ,com humidade de : "<<menor<<" %"<<std::endl;
    return 0;
}