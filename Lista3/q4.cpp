#include<iostream>
int main(){
    int valor;
    std::cin>>valor;
    for(int i=2;i<=9999;i++){
        if(i%valor ==2){
            std::cout<<i<<std::endl;
        }
    }
    return 0;
}
