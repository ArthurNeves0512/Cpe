#include<iostream>
#include<iomanip>
int main(){
    int codigo;
    int quant;
    std::cin>>codigo>>quant;
    std::cout<<std::fixed<<std::setprecision(2);
    switch (codigo)
    {
    case 1:
        std::cout<<"Total: R$ "<< quant*4.00<<std::endl;
        break;
    case 2:
        std::cout<<"Total: R$ "<< quant*4.50<<std::endl;
        break;
    case 3:
        std::cout<<"Total: R$ "<< quant*5.00<<std::endl;
        break;
    case 4:
        std::cout<<"Total: R$ "<< quant*2.00<<std::endl;
        break;
    case 5:
        std::cout<<"Total: R$ "<< quant*1.50<<std::endl;
        break;
    default:
        break;
    }
    return 0;
}