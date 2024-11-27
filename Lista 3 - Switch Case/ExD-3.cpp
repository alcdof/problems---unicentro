    #include <iostream>

    using namespace std;

    int main(){
        char dia;
        cout<<"Digite um dia da semana: 0 - domingo, 1 - segunda, 2 - terca, 3 - quarta, 4 - quinta, 5 - sexta, 6 - sabado.";
        cin>>dia;
        switch(dia){
        case'0':cout<<"Domingo."<<endl;break;
        case'1':cout<<"Segunda."<<endl;break;
        case'2':cout<<"Terca."<<endl;break;
        case'3':cout<<"Quarta."<<endl;break;
        case'4':cout<<"Quinta."<<endl;break;
        case'5':cout<<"Sexta."<<endl;break;
        case'6':cout<<"Sabado."<<endl;break;    
        default:cout<<"Erro."<<endl;break;            
        }
    }