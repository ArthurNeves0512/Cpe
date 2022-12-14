#include<iostream>
int main(){
    int num_testes,pop_A,pop_B,anos=0;
    float cresc_A,cresc_B;
    std::cin>>num_testes;
    for(int i=0;i<num_testes;i++){
        std::cin>>pop_A>>pop_B>>cresc_A>>cresc_B;
        while(pop_A<=pop_B){
            pop_A = (int) pop_A + (pop_A*cresc_A)/100 ;
            pop_B = (int)pop_B + (pop_B*cresc_B)/100;
            anos++;
            if(anos>100){
            std::cout<<"Mais de 1 seculo."<<std::endl;
            break;
            }
        }
        if(anos<=100){
            std::cout<<anos<<" anos."<<std::endl;
        }
        
        anos =0;
    }
    return 0;
}