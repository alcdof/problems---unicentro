#include <iostream>

using namespace std;

int main(){
    int anonasc,anoemp;
    cin>>anonasc>>anoemp;
    int idade, anostrab;
    idade=2024-anonasc;
    anostrab=2024-anoemp;
    if (idade>=65 && anostrab>=30)
    cout<<"Requerer aposentadoria.";
    else if (idade>=60 && anostrab>=25)
    cout<<"Requerer aposentadoria.";
    else cout<<"Nao requerer.";
}