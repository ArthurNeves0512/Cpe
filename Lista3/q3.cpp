#include<iostream>
int main(){
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
    
    return 0;
}