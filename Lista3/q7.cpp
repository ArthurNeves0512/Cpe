#include<iostream>
#include<iomanip>
double calculo(double v1,double v2){
    std::cout<<std::setprecision(2)<<std::fixed;
    double c = v1/v2;
    std::cout<<"media= "<<c;

}
int main(){
    double valor,valor2;
    
    std::cin>>valor;
    bool valido1 = 0<=valor && valor<=10;
    std::cout<<valido1;
    bool valido2 = 0<=valor2 && valor2<=10;
    
    while(!valor==2){
        if(valido1){
            std::cin>>valor2;
            if(valido2){
                calculo(valor,valor2);
                std::cout<<"novo calculo (1-sim 2-nao)"<<std::endl;
            }
            else{
                std::cout<<"nota invalida"<<std::endl;    
            }
        }
        else{
            std::cout<<"nota invalida"<<std::endl;
        }
        std::cin>>valor;
    }
    return 0;  
}