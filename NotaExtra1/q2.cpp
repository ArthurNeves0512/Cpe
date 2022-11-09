#include<iostream>
using namespace std;
int main(){
    float media;
    cout<<"Insira a Media do Aluno: "<<endl;
    cin>>media;
    
    if(media<5){
        cout<<"MI";
    }
    else if(5<=media<=6.9){
        cout<<"MM";
    }
    else if(7<=media<=8.9){
        cout<<"MS";
    }
    else if(9<=media<=10){
        cout<<"SS";
    }
    return 0;
}