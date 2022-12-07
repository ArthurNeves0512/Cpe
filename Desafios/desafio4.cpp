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
    std::cout<<"Nao existem Filmes com essa indicação"<<std::endl;
        break;
    }
    
    }

int main (){
    int estrelas;
    std::cin>>estrelas;
    for( estrelas; estrelas-5 <5;estrelas++){
        func(estrelas);
    }
    
    return 0;
}