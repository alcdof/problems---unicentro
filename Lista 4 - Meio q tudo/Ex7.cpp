#include <iostream>

using namespace std;

int main(){
    int usuario,senha;
    cin>>usuario;
    if (usuario==1234){
        cin>>senha;
        if (senha==9999){
            cout<<"Acesso permitido.";
        }
        else if (senha!=0)
            cout<<"Senha incorreta.";
    }
    else if (usuario!=1234){
    cout<<"Usuario invalido!";
    }
}