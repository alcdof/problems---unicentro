#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string nome;
    int quantidade;
    float precoun;
    cin>>nome>>quantidade>>precoun;
    float total,desconto,totalcomdesc;
    total=quantidade*precoun;
    if (quantidade<=5){
        desconto=0.02*total;
    }    
        else if ((quantidade>5) && (quantidade<=10)){
            desconto=0.03*total;
        }
        else if (quantidade>10){
            desconto=0.05*total;
        }
    totalcomdesc=total-desconto;
    cout<<totalcomdesc;
    
    



}