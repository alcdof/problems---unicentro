    #include <iostream>
    
    using namespace std;

    int main(){
        float salario, alimentacao, transporte, educacao, pcta, pctt, pcte;
        cout<<"Informe seu salario: ";
        cin>>salario;
        cout<<"Informe o gasto com alimentacao: ";
        cin>>alimentacao;
        cout<<"Informe o gasto com transporte: ";
        cin>>transporte;
        cout<<"Informe o gasto com educacao: ";
        cin>>educacao;
        pcta==((100*alimentacao)/salario);
        pctt==((100*transporte)/salario);
        pcte==((100*educacao)/salario);
        if ((alimentacao>salario)||(transporte>salario)||(educacao>salario)||((alimentacao+transporte)>salario)||((alimentacao+educacao)>salario)||((educacao+transporte)>salario))
            cout<<"Erro. O gasto percentual excede 100%.";
            else 
                if (pcte>pcta>pctt) 
                    cout<<pcte<<pcta<<pctt;
                if (pcte>pctt>pcta)
                    cout<<pcte<<pctt<<pcta;
                if (pctt>pcte>pcta)
                    cout<<pctt<<pcte<<pcta;
                if (pctt>pcta>pcte)
                    cout<<pctt<<pcta<<pcte;
                if (pcta>pcte>pctt)
                    cout<<pcta<<pcte<<pctt;
                if (pcta>pctt>pcte)
                    cout<<pcta<<pctt<<pcte;
    }