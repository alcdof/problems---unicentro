#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char mora[3];
    int moradores, idademaisvelha, divisoresquarto, tempo;
    cout << "Mora com outras pessoas na mesma casa?";
    cin >> mora;
    if ((strcmp(mora, "sim") == 0) || (strcmp(mora, "Sim") == 0) || (strcmp(mora, "SIM") == 0) || (strcmp(mora, "S") == 0) || (strcmp(mora, "s") == 0)){
        char divide[3];
        cout << "Com quantas pessoas mora?";
        cin >> moradores;
        cout << "Quantos anos tem a mais velha?";
        cin >> idademaisvelha;
        cout << "Voce divide o quarto com outras pessoas?";
        cin >> divide;
        if ((strcmp(divide, "sim") == 0)|| (strcmp(divide, "Sim") == 0) || (strcmp(divide, "SIM") == 0) || (strcmp(divide, "s") == 0)){ 
            cout << "Com quantas?";
            cin >> divisoresquarto;
            cout << "Ha quantos anos vive na mesma casa?";
            cin >> tempo;
            cout<<"Voce mora com "<<moradores<<" outras pessoas, a idade do morador mais velho eh de "<<idademaisvelha<<" anos, voce divide seu quarto com "<<divisoresquarto<<" e mora ha "<<tempo<<" anos.";
        }
        else {
                cout << "Ha quantos anos vive na mesma casa?";
                cin >> tempo;
                cout<<"Voce mora com "<<moradores<<" outras pessoas, a idade do morador mais velho eh de "<<idademaisvelha<<" anos, voce nao divide seu quarto e mora ha "<<tempo<<" anos.";
        }
    }
    else{ 
        cout<< "Ha quanto tempo vive na mesma casa?";
        cin >> tempo;
        
        cout<<"Voce nao mora com outras pessoas e mora ha "<<tempo<<" anos.";
    }
}