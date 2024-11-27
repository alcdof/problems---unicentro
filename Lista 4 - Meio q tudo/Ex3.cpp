#include<iostream>

using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float maior1,maior2;
    if ((a!=b) && (a!=c) && (b!=c)){
        if (a>b && a>c){
        maior1=a;
        maior2=(b>c)?b:c;
        }
        else if (b>a && b>c){
        maior1=b;
        maior2=(a>c)?a:c;
        }
        else{
        maior1=c;
        maior2=(a>b)?a:b;    
        }
    }
    float soma=maior1+maior2;
    cout<<soma;
}