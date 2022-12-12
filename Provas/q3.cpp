#include<iostream>
int main(){
    int cilindros;
    std::cin>>cilindros;
    for(cilindros;cilindros-12<12;cilindros++){
        switch (cilindros)
        {
        case 3:
            std::cout<<"Volkswagen Up"<<std::endl;
            break;
        case 4:
            std::cout<<"Toyota Corolla"<<std::endl;
            break;
        case 6:
            std::cout<<"BMW 330i"<<std::endl;
            break;
        case 8:
            std::cout<<"Ford Mustang"<<std::endl;
            break;
        case 10:
            std::cout<<"Dodge Viper"<<std::endl;
            break;
        case 12:
            std::cout<<"Pagani Zonda"<<std::endl;
            break;
    return 0;
        }
    }
}