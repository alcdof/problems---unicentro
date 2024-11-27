#include<iostream>

using namespace std;

int main(){
    float qtdmaca, qtdmorang;
    cin>>qtdmaca>>qtdmorang;
    float precomaca,precomoran;
    if (qtdmaca<=5){
        precomaca=2.5*qtdmaca;
    }
    else if (qtdmaca>=5){
        precomaca=2.2*qtdmaca;
    }
    if (qtdmorang<=5){
        precomoran=1.8*qtdmorang;
    }
    else if (qtdmorang>=5){
        precomoran=1.5*qtdmorang;
    }
    float desconto, qtdtotal, total;
    qtdtotal=qtdmaca+qtdmorang;
    total=precomaca+precomoran;
    if (total>=25 || qtdtotal>=8){
        desconto=0.1*total;
    }
    else{
        desconto=0.0;
    }
    float totalcomdesc;
    totalcomdesc=total-desconto;
    cout<<totalcomdesc;
}