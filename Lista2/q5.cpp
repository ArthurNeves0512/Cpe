#include<iostream>
#include<list>
#include<math.h>
int main(){ 

    float lista[3];
    float a,b,c;
    int n = sizeof(lista)/1;
    std::cin>>a>>b>>c;
    lista[0] = a;lista[1] = b; lista[2] = c;
    std::sort(lista, lista+n);
    a = lista[0];
    b = lista[1]; c= lista[2];
    if(a>=b+c){
        std::cout<<"NAO FORMA TRIANGULO"<<std::endl;
    }
    if(pow(a,2)== pow(b,2)+pow(c,2))
    
    return 0;
}