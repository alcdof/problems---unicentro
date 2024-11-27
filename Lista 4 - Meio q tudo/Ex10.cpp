    #include <iostream>

    using namespace std;

    int main(){
        char plano;
        float salario, novosalario;
        cin>>plano>>salario;
        if ((plano=='a')||(plano=='A')){
            novosalario=(1.1*salario);
            cout<<novosalario;
        } else if ((plano=='b')||(plano=='B')){
                novosalario=(1.15*salario);
                cout<<novosalario;
        } else if ((plano=='c')||(plano=='C')){
                novosalario=(1.2*salario);
                cout<<novosalario;
            }
            else 
            cout<<"Plano Invalido.";
    }