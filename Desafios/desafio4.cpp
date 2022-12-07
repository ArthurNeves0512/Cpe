#include<iostream>
void func(int x){
        switch (x)
    {
    case 2:
    std::cout<<"Dr. Dollithe"<<std::endl;
        break;
    case 3:
    std::cout<<"007 Contra Goldeneye"<<std::endl;
        break;
    case 4:
    std::cout<<"De Volta Para o Futuro"<<std::endl;
        break;
    case 5:
    std::cout<<"O Poderoso Chefao"<<std::endl;
        break;
    default:
    
        break;
    }
    
    }

int main (){
    int estrelas;
    std::cin>>estrelas;
    if(1<=estrelas && estrelas<=5){
    for( estrelas; estrelas-5 <5;estrelas++){
        func(estrelas);
    }
    }
    else{
        std::cout<<"Nao existem Filmes com essa indicacao"<<std::endl;
    }
    
    return 0;
}