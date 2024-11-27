#include <iostream>

using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Digite dois numeros: "<<endl;
    cin>>a>>b;
    cout<<"Digite a operacao "<<endl;
    cin>>op;
    switch (op){
    case 'm':cout<<((a+b)/2)<<endl;break;
    case '+':cout<<(a+b)<<endl;break;
    case '%':cout<<(a%b)<<endl;break;
    case '>':
        if (a>b) cout<<a<<" "<<b<<endl;
        else if (a<b) cout<<b<<" "<<a<<endl;
    break;
    default: cout<<"Operacao nao disponivel.";
    }
}