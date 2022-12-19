#include<iostream>
int main(){
    int n,x,y,soma;
    std::cin>>n;
    for(int flag=0;flag<n;flag++){
        soma =0;
        std::cin>>x>>y;
        if(x<y){
            x = x+1;
            for(int(x+1);x<y;x++){
                if(x%2 !=0){
                    soma = soma+x;
                }
            }
        }
        else if(x>y){
            y = y+1;
            for(int (y+1);y<x;y++){
                if(y%2 !=0){
                    soma = soma+y;    
                }
            }   
        }
        std::cout<<soma<<std::endl;
        soma =0;
    }
    return 0;
}