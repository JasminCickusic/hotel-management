#include <iostream>
#include "Menu.h"
#include<stdlib.h>

using namespace std;



int main(){
     cout<<"------------------------------------------------------------------------------------------------------------------------";
     cout<<endl<<"\t\t\t\t\t Hotel Management Software \t\t\t\t\t"<<endl;
     cout <<"------------------------------------------------------------------------------------------------------------------------";
     cout<<endl<<"\t\t\t\t\t\tWELCOME!\t\t\t\t\t\t\t\t"<<endl;
     cout<<"1-Uloguj se\n2-Izlaz"<<endl;
     Menu menu;
     int iz;
     cin>>iz;
    switch(iz){

    case 1:
    menu.Meni1();
    break;
    case 2:
        cout<<"\t\t\t\t\t+-------------------------------+\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\tJeste li sigurni da zelite izaci\n\n\t\t\t\t\t\tDA\t\tNE"<<endl;
        cout<<"\t\t\t\t\t+-------------------------------+\t\t\t\t"<<endl;
        string odg;
        cin>>odg;
        if(odg=="ne"){
        cout<<"\n\n\t\t\t\t\tOdlucili ste se ostati u programu:D\n\nUlogujte se sa jednom od mogucnosti:\n"<<endl;
        menu.Meni1();
        }
        else {exit(0);}


    }

    return 0;
}
