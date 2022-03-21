#include "Menu.h"
#include<iostream>
#include<vector>
#include<string>



using namespace std;
Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}
void Menu::ispisOpcije () {

cout<<endl<<"1.Dodaj gosta\t\t9.Dodaj radnika\n2.Ukloni gosta\t\t10.Ukloni radnika\n3.Uredi gosta\t\t11.Uredi radnika\n4.Lista gostiju\t\t12.Lista radnika\n5.Provjeri sobu\t\t13.Vrati se na pocetak\n6.Racun\t\t\t14.Plata\n7.Pohvala\n8.Zalba"<<endl;

    }
void Menu::ispisOpcijeZaGosta () {

cout<<"\n1.Dodaj pohvalu\t2.Dodaj zalbu\t3.Vrati se na pocetak"<<endl;
    int choice1;{
    cin>>choice1;
    switch(choice1){
    case 1:
        dodajPohvalu ();
    break;
    case 2:
        dodajZalbu ();
        break;
    case 3:
        Meni1();
    }

      }

       }

void Menu:: izaberiOpciju() {
int izbor;
cin>>izbor;
switch (izbor) {
case 1:
    addGost();
    break;

case 2:
    brisiGosta();
    break;

case 3:
    urediGosta ();

case 4:
    for (Gost g:this->listaGostiju) {
    g.ispisiGosta ();
    }
    break;

case 5:
    provjeraSobe ();
    break;

case 6:
    mojRacun();
    break;

case 7:
    ispisPohvale();
    break;

case 8:
    ispisZalbe();
    break;

case 9:
    addEmployee();
    break;

case 10:
    brisiRadnika();
    break;

case 11:
    urediRadnika();
    break;

case 12:
    for (Radnik r:this->listaRadnika) {
    r.ispisRadnika();
         }
    break;

case 13:
    Meni1();
break;

case 14:
    netoPlata();
    break;



}
}



bool Menu::login (){
    string username;
    string pass;
    cout<<endl;
    cout<<"Unesite username:"<<endl;
    cin>>username;
    cout<<"Unesite password"<<endl;
    cin>>pass;
    if(username=="admin"&&pass=="admin123"){
        cout<<"Tacan unos"<<endl;
        return true;
    }return false;
}

bool Menu:: loginZaGosta (){
    string user;
    string pass;
    cout<<endl;
        cout<<"Unesite username:"<<endl;
        cin>>user;
        cout<<"Unesite password"<<endl;
        cin>>pass;
        if(user=="gost"&&pass=="gost123"){
            cout<<"Tacan unos"<<endl;
            return true;
        }return false;
        }

int Menu::Meni1() {
     cout<<"1-Uloguj se kao administrator\n2-Uloguj se kao gost\n"<<endl;
      int choice;
        cin>>choice;
         switch (choice){
            case 1:
            while(1){
            if(login()!=true){
              cout<<"Invalid"<<endl;
            }else {cout<<endl<<"\t\t\t\t\t---WELCOME TO MENU---  "<<endl;
            while (1){
            ispisOpcije();
            izaberiOpciju();
            }
        }
         }    case 2:
               if  (loginZaGosta()!=true){
               cout<<"Invalid"<<endl;
              }else {cout<<endl<<"\t\t\t\t\t\t---Welcome dear guest---"<<endl;
               while(1){
               ispisOpcijeZaGosta();

               }

    }

    }

}




