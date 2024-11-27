#include <iostream>

using namespace std;

int main(){
    int idadeh1, idadeh2, idadem1, idadem2, idadehmaior, idademmaior, idadehmenor, idademmenor;
    cin>>idadeh1>>idadeh2>>idadem1>>idadem2;
    if (idadeh1!=idadeh2 && idadem1!=idadem2){
        if (idadeh1>idadeh2){
            idadehmaior=idadeh1;
            idadehmenor=idadeh2;
        }
        else if (idadeh2>idadeh1){
            idadehmaior=idadeh2;
            idadehmenor=idadeh1;
        }
        if (idadem1>idadem2){
            idademmaior=idadem1;
            idademmenor=idadem2;
        }
        else if (idadem2>idadem1){
            idademmaior=idadem2;
            idademmenor=idadem1;
        }
        int soma1, produto2;
        soma1=idadehmaior+idademmaior;
        produto2=idadehmenor*idademmenor;
        cout<<soma1<<endl<<produto2;
    }
    else{
        cout<<"Idades iguais. Digite outras.";
    }
}