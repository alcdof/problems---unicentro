    #include<iostream>
    #include<cmath>

    using namespace std;

    int main(){
        char opcao;
        cout<<"Digite a figura desejada para o calculo de area. ";
        cin>>opcao;
        float areac,areaq,arear,areat;
        float b,h,r,l;
        switch(opcao){
            case 'c': 
            double pi;
            pi=acos(-1.0);
            cout<<"Informe o raio do circulo: ";
            cin>>r;
            areac=pi*r*r;
            cout<<"A area eh de "<<areac<<endl;break;
            case 'q':
            cout<<"Informe o lado do quadrado: ";
            cin>>l;
            areaq=(l*l);
            cout<<"A area eh de "<<areaq<<endl;break;
            case 'r':
            cout<<"Informe a base e a altura: ";
            cin>>b>>h;
            arear=b*h;
            cout<<"A area eh de "<<arear<<endl;break;
            case 't':
            cout<<"Informe a base e a altura: ";
            cin>>b>>h;
            areat=(b*h)/2;
            cout<<"A area eh de "<<areat<<endl;break;
        }
    }