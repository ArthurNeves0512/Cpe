#include<iostream>
int main(){
    int v1,v2,cont;
    std::cin>>v1>>v2;
    for(int i=1;i<=v2;i++){
        if(abs(v1-cont)>1){
                std::cout<<i<<" ";
                cont ++;
            }
            else{
                std::cout<<i<<std::endl;
                cont =0;
            }
        
    }
    return 0;
}