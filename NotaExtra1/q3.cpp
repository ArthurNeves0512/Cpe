#include<iostream>
using namespace std;
int main(){
    int quantidadeAlunos;
    int tipoCurso;
    cout<<"Insira a quantidade de alunos: "<< endl;
    cin>>quantidadeAlunos;
    for(int flag=1;flag<=quantidadeAlunos;flag++){
        cout<<"Insira o curso do aluno "<<flag <<endl<<"(1) Engenharia de Redes"
        <<"(2) Engenharia Eletrica ";
        cin>>tipoCurso;
        switch (tipoCurso)
        {
        case 1:
            cout<<"Esse aluno e do curso: Engenharia de Redes"<<endl;
            break;
        case 2:
            cout<<"Esse aluno e do curso: Engenharia Eletrica"<<endl;
        }
    }
    return 0;
}