    #include <iostream>
    #include <string.h>

    using namespace std;

    int main(){
        char casamento[3];
        int ano_casamento, anos_de_casado, numero_filhos, idadefilhomaisnovo;
        float pretensaosal;
        cout<<"Voce eh casado? "<<endl;
        cin>>casamento;
        if ((strcmp(casamento,"sim")==0)||(strcmp(casamento,"SIM")==0))
        cout<<"Digite o ano do casamento: "<<endl;
        cin>>ano_casamento;
        anos_de_casado=(2024-ano_casamento);
        if (ano_casamento>2)
        cout<<"Quantos filhos voce tem? "<<endl;
        cin>>numero_filhos;
        if (numero_filhos>=0)
        cout<<"Digite a idade do filho mais novo: "<<endl;
        cin>>idadefilhomaisnovo;
        cout<<"Qual eh a sua pretensao salarial? "<<endl;
        cin>>pretensaosal;
        cout<<"\n"<<casamento<<"\n"<<ano_casamento<<"\n"<<anos_de_casado<<"\n"<<numero_filhos<<"\n"<<idadefilhomaisnovo<<"\n"<<pretensaosal;
    }