#include<iostream>
int main(){
    int v1,v2,cont;
    std::cin>>v1>>v2;
    for(int i=1;i<100;i++){
        if(cont==v1){
            std::cout<<""<<std::endl;
            cont =0;
        }
        else{
            if(v1-cont>1){
                std::cout<<i <<" ";
                cont ++;
            }
            else{
                std::cout<<i;
                cont ++;
            }
           
        }
        
    }
    return 0;
}