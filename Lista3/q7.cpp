#include<iostream>
#include<iomanip>
double calculo(double v1,double v2){
    std::cout<<std::setprecision(2)<<std::fixed;
    double c = (v1+v2)/2;
    std::cout<<"media = "<<c<<std::endl;
}
int main(){
    bool flag =1;
    while(flag){
    float nota1, nota2;
    std::cin>>nota1;
    while(!(0<=nota1 && nota1<=10)){
        std::cout<<"nota invalida"<<std::endl;
        std::cin>>nota1;
    }
    std::cin>>nota2;
    while(!(0<=nota2 && nota2<=10)){
        std::cout<<"nota invalida"<<std::endl;
        std::cin>>nota2;
    }
    calculo(nota1,nota2);
    bool meudeus = true;
    while(meudeus){
        std::cout<<"novo calculo (1-sim 2-nao)"<<std::endl;
        std::cin>>nota1;
        if((nota1== 1) ||(nota1==2)){
            meudeus = false;
        }
    }
    if(nota1 ==2){
        flag =0;
    }
    }
    return 0;
}