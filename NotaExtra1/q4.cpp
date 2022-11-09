#include<iostream>
using namespace std;
int main(){
    int valor;
    cout<<"Insira Um numero para sabermos se eh par ou impar "<<endl;
    cin>>valor;
    if(valor%2 !=0){
        cout<<"Eh impar";
    }
    else{
        cout<<"Eh par";
    }
    return 0;
}