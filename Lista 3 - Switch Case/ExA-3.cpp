    #include <iostream>

    using namespace std;

    int main(){
        float a;
        char op;
        cout<<"Digite um numero: "<<endl;
        cin>>a;
        cout<<"Digite a operacao: "<<endl;
        cin>>op;
        switch(op){
        case '2': cout<<"O dobro eh "<<(2*a)<<", a operacao realizada foi a multiplicacao por 2 e o numero informado foi "<<a<<"."<<endl;break;
        case '3': cout<<"O triplo eh "<<(3*a)<<", a operacao realizda foi a multiplicacao por 3 e o numero informado foi "<<a<<"."<<endl;break;
        case '4': cout<<"O quadruplo eh "<<(4*a)<<", a operacao realizada foi a multiplicacao por 4 e o numero informado foi "<<a<<"."<<endl;break;
        case '5': cout<<"O quintuplo eh "<<(5*a)<<", a operacao realizada foi a multiplicacao por 5 e o numero informado foi "<<a<<"."<<endl;break;
        default:cout<<"Erro.";
        }
    }            