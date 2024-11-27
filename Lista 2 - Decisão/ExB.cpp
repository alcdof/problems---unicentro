    #include<iostream>
    #include<string.h>

    using namespace std;

    int main(){
        char febril[3], dorcorporal[3], olhosvermelhos[3], palidez[3], tosse[3], inflamacao[3];
        cout<<"Esta febril?"<<endl;
        cin>>febril;
        cout<<"Sente dor corporal?"<<endl;
        cin>>dorcorporal;
        cout<<"Os olhos estao avermelhados?"<<endl;
        cin>>olhosvermelhos;
        cout<<"Esta palido?"<<endl;
        cin>>palidez;
        cout<<"Tem tosse?"<<endl;
        cin>>tosse;
        cout<<"Inflamacao?"<<endl;
        cin>>inflamacao;
        if (((strcmp(febril,"sim")==0) || (strcmp(febril,"SIM")==0)) && ((strcmp(dorcorporal,"sim")==0) || (strcmp(dorcorporal,"SIM")==0)) && ((strcmp(olhosvermelhos,"nao")==0)||(strcmp(olhosvermelhos,"NAO")==0)) && ((strcmp(palidez,"nao")==0)||(strcmp(palidez,"NAO")==0)) && ((strcmp(tosse,"nao")==0)||(strcmp(tosse,"NAO")==0)) && ((strcmp(inflamacao,"nao")==0)||(strcmp(inflamacao,"NAO")==0))                             )
            cout<<"Diagnostico 1.";
        else
            if ((strcmp(dorcorporal,"sim")==0)||(strcmp(dorcorporal,"SIM")==0) && ((strcmp(palidez,"sim")==0)||(strcmp(palidez,"SIM")==0)) || ((strcmp(olhosvermelhos,"sim")==0)||(strcmp(olhosvermelhos,"SIM")==0) && ((strcmp(palidez,"sim")==0)||(strcmp(palidez,"SIM")==0))))
            cout<<"Diagnostico 2.";
        else 
            if (((strcmp(tosse,"sim")==0)||(strcmp(tosse,"SIM")==0)) && ((strcmp(inflamacao,"sim")==0)||(strcmp(inflamacao,"SIM")==0)))
                cout<<"Diagnostico 3.";
        else
                cout<<"Diagnostico 4.";
    }