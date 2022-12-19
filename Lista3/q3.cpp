#include<iostream>
int main(){
<<<<<<< HEAD
    int v1,v2;
    int sum =0;
    std::cin>>v1>>v2;
    int f1 = v1;
    if(v1<v2){
        for(v1;v1<v2;v1++){
            std::cout<<"VALOR 1 "<<v1<<std::endl;
            std::cout<<"VALOR 2 "<<v2<<std::endl;
            if(v1%2)
            sum = sum+v1;
        }
    }
   else if(v2<v1){
        for(v2;v2<v1-1;v2++){
            std::cout<<"VALOR  "<<v2<<" | ";
            //std::cout<<"VALOR 1 "<<v1<<std::endl;
            if((v2++ %2 )!=0){
                std::cout<<sum<<std::endl;
                sum = sum+v2;
            }
            
        }
    }
    std::cout<<sum<<std::endl;
    
=======
    int x,y,soma =0;
    std::cin>>x>>y;
    if(x<y){
    for(int(x+1);x<=y;x++){
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
>>>>>>> cbfd64b8eb5f514a3b9c6e93329221bb01bf0ba5
    return 0;
}