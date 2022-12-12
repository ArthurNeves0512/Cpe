#include<iostream>
#include<iomanip>
int main(){
    int quant_alunos,idTurma;
    float nota;
    std::cin>>quant_alunos>>idTurma;
    double mTurmaA =0,mTurmaB =0,mTurmaC=0;
    float notaA =0,notaB=0,notaC=0;
    int qA =0,qB =0,qC=0;

    for(int i=0;i<quant_alunos;i++){
        std::cin>>idTurma;
        std::cin>>nota;
        switch (idTurma)
        {
        case 1:
            qA = qA+1;
            notaA = nota+notaA;
            break;
        case 2:
            qB ++;
            notaB = notaB+nota;
            break;
        case 3:
            qC++;
            notaC = notaC+nota;
            break;
        }
    
    }
    
    std::cout<<std::setprecision(2)<<std::fixed;
    mTurmaA = notaA/qA; mTurmaB= notaB/qB;mTurmaC=notaC/qC;
    if(mTurmaA>mTurmaB && mTurmaA>mTurmaC){
        std::cout<<"Turma com maior media:Turma A"<<std::endl<<mTurmaA<<std::endl;
    }
    else if(mTurmaB>mTurmaC && mTurmaB>mTurmaA){
        std::cout<<"Turma com maior media:Turma B"<<std::endl<<mTurmaB<<std::endl;
    }
    else if(mTurmaC>mTurmaA && mTurmaC>mTurmaB){
        std::cout<<"Turma com maior media:Turma C"<<std::endl<<mTurmaC<<std::endl;
    }
    

    return 0;
}