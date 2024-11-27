    #include <iostream>

    using namespace std;

    int main(){
        float a,b,c,somaab,somabc,somaac;
        cout<<"Digite tres valores: ";
        cin>>a>>b>>c;
        somaab=a+b;
        somabc=b+c;
        somaac=a+c;
        if (a>=somabc)
            cout<<"O triangulo nao pode ser formado.";
        else 
            if ((a<somabc)&&(a!=b)&&(a!=c)&&(b!=c))
            cout<<"Triangulo escaleno.";
            else 
            if ((a<somabc)&&((a=b)&&(a!=c)||(b=c)&&(a!=c)||(a=c)&&(a!=b)))
            cout<<"Triangulo isosceles.";
            else
            if ((a<somabc)&&(a=b)&&(b=c)&&(a=c))
            cout<<"Triangulo equilatero.";
    }