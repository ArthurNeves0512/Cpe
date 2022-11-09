#include<iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int quantAlunos;
    int quantAprovados=0;
    cout<<"Insira o número de alunos "<< endl;
    cin>>quantAlunos;
    for(int flag=1;flag<=quantAlunos;flag++){
        int nota;
        cout<<"Insira nota do aluno número "<<flag<<endl;
        cin>>nota;
        if(nota>=5){
            quantAprovados++;
        }

    }
    cout<<quantAprovados<<endl;
    return 0;
}




