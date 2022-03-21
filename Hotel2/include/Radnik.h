#ifndef RADNIK_H
#define RADNIK_H
#include<string>
#include<iostream>

using namespace std;


class Radnik
{
    public:

        int ID;
        string ImeRadnika;
        string Prezime;
        int Godine;
        int BrojMob;
        string Pozicija;
        float NetoPlata;

        Radnik ();

        Radnik (int id, string ime, string prezime, int godine, long int brojMob, int pozicija, float netoPlata){
        ID=id;
        ImeRadnika=ime;
        Prezime=prezime;
        Godine=godine;
        BrojMob=brojMob;
        Pozicija=pozicija;
        NetoPlata=netoPlata;
        }
         ~Radnik();


        void setID (int id){
        while (( id > 9999999) != (id < 99999999)){
        cout<<"ID mora sadrzavati 8 cifara!\nPokusajte ponovo:"<<endl;
        cin>>id;
          }
        ID=id;
        }

        int getID (){
        return ID;
        }

        void setImeRadnika (string ime){
        while(ime.length()<=3){
        cout<<"Ime mora sadržavati više od tri karaktera:"<<endl;
        cin>>ime;
        }
        ImeRadnika=ime;
        }

        string getIme (){
        return ImeRadnika;
        }

        void setPrezime (string prezime){
        while(prezime.length()<=3){
        cout<<"Ime mora sadržavati više od tri karaktera:"<<endl;
        }
        Prezime=prezime;
        }

        string getPrezime (){
        return Prezime;
        }

        void setGodine (int godine){
        while(godine<=18){
        cout<<"Uposlenik ne smije imati manje od 18 godina:"<<endl;
        }
        Godine=godine;
        }

        int getGodine (){
        return Godine;
        }


        void setBrojMob ( long int brojMob){
        BrojMob=brojMob;
        }

        long int getBrojMob(){
        return BrojMob;
        }


        void setPozicija (string pozicija){
        Pozicija=pozicija;
        }

        string getPozicija (){
        return Pozicija;
        }

        void setNetoPlata (float netoPlata){
        NetoPlata=netoPlata;
        }

        float getNetoPlata (){
        return NetoPlata;
        }





    void ispisRadnika (){
        cout<<"ID:"<<ID<<endl;
        cout<<"Ime:"<<ImeRadnika<<endl;
        cout<<"Prezime:"<<Prezime<<endl;
        cout<<"Godine:"<<Godine<<endl;
        cout<<"Broj mobitela:"<<BrojMob<<endl;
        cout<<"Pozicija:"<<Pozicija<<endl;
        cout<<"NetoPlata:"<<NetoPlata<<endl;


    }









};

#endif // RADNIK_H
