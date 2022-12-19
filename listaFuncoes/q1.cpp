#include<iostream>
namespace cpe{
    float media;
    float calcula_media(float notas, int quant_alunos){
        media =notas/quant_alunos;
        return media;
    }
}
namespace aed{
    float media;
    float calcula_media(float notas, int quant_alunos){
        media = notas/quant_alunos;
        return media;
    }
}

int main(){
    int num_cpe,num_aed;
    float nota_cpe =0,nota_aed =0,nota_cpe2=0,nota_aed2=0;
    std::cin>>num_cpe;
    std::cin>>num_aed;
    for(int i=0;i<num_cpe;i++){
        std::cin>>nota_cpe2;
        nota_cpe = nota_cpe+ nota_cpe2;
    }
    std::cout<<cpe::calcula_media(nota_cpe,num_cpe)<<std::endl;
    for(int i=0;i<num_aed;i++){
        std::cin>>nota_aed2;
        nota_aed = nota_aed+ nota_aed2;
    }
    std::cout<<aed::calcula_media(nota_aed, num_aed)<<std::endl;
    return 0;
}