    #include<iostream>

    using namespace std;

    int main(){
        char sitciv, cidade, nomecjg[15], sexocjg[10];
        int idade, qtdfilhos, idademaisvelho, salario;
        cout<<"Digite sua situacao civil: ";
        cin>>sitciv;
        switch(sitciv){
            case 's': cout<<"Digite sua idade: ";
            cin>>idade; 
            cout<<"Solteiro com "<<idade<<" anos."<<endl;break;
            case 'c': cout<<"Digite o sexo e a idade do seu conjuge: ";
            cin>>sexocjg>>nomecjg;
            cout<<"O sexo de seu conjuge eh "<<sexocjg<<" e o nome dele eh "<<nomecjg<<"."<<endl;break;
            case 'd': cout<<"Digite o numero de filhos e a idade do mais velho: caso nao tenha filhos digite 0. ";
            cin>>qtdfilhos>>idademaisvelho;
            cout<<"Voce tem "<<qtdfilhos<<" filhos e a idade do mais velho eh de "<<idademaisvelho<<" anos."<<endl;break;
            case 'v': cout<<"Digite a cidade em que mora e o seu salario: ";
            cin>>cidade>>salario;
            cout<<"Voce mora em "<<cidade<<" e seu salario eh de "<<salario<<"."<<endl;break;
            default:cout<<"Erro.";
        
        }
    }