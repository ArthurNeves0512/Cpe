#include<iostream>
#include<math.h>
#include<iomanip>
int main(){
    int raio;
    std::cin>>raio;
    std::cout<<std::fixed<<std::setprecision(3);
    double pi= 3.14159;
    std::cout<<"VOLUME = "<< (4/3.0)*pi*pow(raio,3);
    return 0;
}