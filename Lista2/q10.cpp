#include<iostream>
#include<iomanip>
int main(){
    int positivos =0;
    float soma =0;
    std::cout<<std::fixed<<std::setprecision(1);

    for(int i=0;i<6;i++){
        
        float valor;
        std::cin>>valor;
        if(valor>0){
            positivos++;
            soma = soma +valor;
        }
        
    }
    std::cout<<positivos<<" valores positivos"<<std::endl;
    std::cout<<soma/positivos<<std::endl;
    return 0;
}