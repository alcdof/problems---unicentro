    #include <iostream>

    using namespace std;

    int main(){
    char sexo, engravidou, setemfilho;
    int qtdfilho, idademaisvelho;

    cout<<"Sexo feminino e mais de 10 anos?";
    cin>>sexo;
        if (sexo='s'){
            cout<<"Ja engravidou?";
            cin>>engravidou;
            if (engravidou='s'){
                cout<<"Tem filhos?";
                cin>>setemfilho;
                if (setemfilho='s'){
                    cout<<"Quantos filhos tem?";
                    cin>>qtdfilho;
                    cout<<"Quantos anos o mais velho tem?";
                    cin>>idademaisvelho;
                    cout<<"Voce eh do sexo feminino e tem mais de 10 anos, ja engravidou e tem "<<qtdfilho<<" filhos. A idade do mais velho eh "<<idademaisvelho<<" anos.";
                else
                    cout<<"Voce eh do sexo feminino e tem mais de 10 anos, ja engravidou mas nao tem filhos.";
                }
            else
                cout<<"Voce eh do sexo feminino e tem mais de 10 anos, mas nunca engravidou.";
            }    
        else 
            cout<<"Voce nao eh do sexo feminino com mais de dez anos.";
        }
    }