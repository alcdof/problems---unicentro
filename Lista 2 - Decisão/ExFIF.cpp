    #include<iostream>

    using namespace std;

    int main(){
        char dia;
        cout<<"Digite um dia da semana: 0 eh domingo, 1 eh segunda, 2 eh terca, assim por diante.";
        cin>>dia;
        if (dia=='0')
            cout<<"Domingo.";
            else 
                if (dia=='1')
                    cout<<"Segunda.";
            else 
                if (dia=='2')
                    cout<<"Terca.";
            else 
                if (dia=='3')
                    cout<<"Quarta.";
            else 
                if (dia=='4')
                    cout<<"Quinta.";
            else 
                if (dia=='5')
                    cout<<"Sexta";
            else 
                if (dia=='6')
                    cout<<"Sabado.";
            else 
                cout<<"Erro.";
    }