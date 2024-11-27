    #include<iostream>
    #include<string.h>

    using namespace std;

    int main(){
        int nprod;
        float frete, totalcompra, totalcomfrete;
        char regiao[16];
        cout<<"Digite o número de produtos que deseja: ";
        cin>>nprod;
        totalcompra=(nprod*5.00);
        cout<<"Digite a região de entrega: ";
        cin>>regiao;
        if (strcmp(regiao,"norte")==0){
            frete=(totalcompra*0.1);
            totalcomfrete=(totalcompra+frete);
            cout<<" O numero de produtos e: "<<nprod<<". O total da compra e: "<<totalcompra<<". O valor do frete e: "<<frete<<". O total com o frete e: "<<totalcomfrete<<". A regiao de entrega e: "<< regiao;
        }
        else
            if (strcmp(regiao,"sul")==0){
                frete=(totalcompra*0.11);
                totalcomfrete=(totalcompra+frete);
                cout<<" O numero de produtos e: "<<nprod<<". O total da compra e: "<<totalcompra<<". O valor do frete e: "<<frete<<". O total com o frete e: "<<totalcomfrete<<". A regiao de entrega e: "<< regiao;
            }
        else 
            if (strcmp(regiao,"centro-oeste")==0){
                frete=(totalcompra*0.12);
                totalcomfrete=(totalcompra+frete);
                cout<<" O numero de produtos e: "<<nprod<<". O total da compra e: "<<totalcompra<<". O valor do frete e: "<<frete<<". O total com o frete e: "<<totalcomfrete<<". A regiao de entrega e: "<< regiao;
            }
        else 
            if (strcmp(regiao,"sudeste")==0){
                frete=(totalcompra*0.15);
                totalcomfrete=(totalcompra+frete);
                cout<<" O numero de produtos e: "<<nprod<<". O total da compra e: "<<totalcompra<<". O valor do frete e: "<<frete<<". O total com o frete e: "<<totalcomfrete<<". A regiao de entrega e: "<< regiao;
            }
        else 
            if (strcmp(regiao,"nordeste")==0){
                frete=(totalcompra*0.08);
                totalcomfrete=(totalcompra+frete);
                cout<<" O numero de produtos e: "<<nprod<<". O total da compra e: "<<totalcompra<<". O valor do frete e: "<<frete<<". O total com o frete e: "<<totalcomfrete<<". A regiao de entrega e: "<< regiao;
            }
    }