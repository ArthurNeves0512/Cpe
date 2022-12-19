#include<iostream>
#include<string>
#include<iomanip>
float media(float p1,float p2,float p3, std::string &mencao){
    float media = (p1+p2+p3)/3;
    if(media>=5){
        mencao= "Aprovado";
    }
    else{
        mencao= "Reprovado";
    }
    return media;
}
int main(){
    float p1,p2,p3;
    std::cin>>p1>>p2>>p3;
    std::string mencao = " ";
    std::cout<<media(p1,p2,p3,mencao)<<std::endl;
    std::cout<<mencao<<std::endl;
    return 0;
}