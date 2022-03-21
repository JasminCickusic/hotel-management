#ifndef GOST_H
#define GOST_H
#include <string>
#include<iostream>
#include<vector>



using namespace std;

class Gost
{
    private:
        long int ID;
        string ImeGosta;
        string Prezime;
        int BrojSobe;
        int Godine;
        long int BrojMobitela;
        float Cijena;
        public:


            Gost();



             Gost(int id ,string ime,string prezime, int godiste, int brojSobe,long long int brojMobitela, float cijena ){
            ID=id;
            ImeGosta=ime;
            Prezime=prezime;
            BrojSobe=brojSobe;
            BrojMobitela=brojMobitela;
            Cijena=cijena;
        }


        ~Gost();






        void setID  (int id){
        while (( id > 9999999) != (id < 99999999)){
        cout<<"ID mora sadrzavati 8 cifara!\nPokusajte ponovo:"<<endl;
        cin>>id;
          }
        ID=id;
        }

        int getID (){
        return ID;
        }


        void setImeGosta  (string ime){
        while(ime.length()<=3) {
        cout<<"Ime mora sadržavati više od tri karaktera:"<<endl;
        cin>>ime;
         }
        ImeGosta=ime;

}
        string getImeGosta (){
        return ImeGosta;
        }

        void setPrezime  (string prezime){
        while(prezime.length()<=3) {
        cout<<"Ime mora sadržavati više od tri karaktera:"<<endl;
        cin>>prezime;
         }
        Prezime=prezime;

        }

        string getPrezime (){
        return Prezime;
        }


        void setBrojSobe (int broj){
        BrojSobe=broj;
        }

        int getBrojSobe(){
        return BrojSobe;
        }

        void setGodine (int godine){
        while(godine<18) {
        cout<<"Korisnik ne smije biti mladji od 18 godina"<<endl;
        cin>>godine;
        }Godine=godine;
        }
        int getGodine (){
        return Godine;
        }


        void setBrojMobitela(double brMob){
        BrojMobitela=brMob;

        }

        double getBrojMobitela (){

        return BrojMobitela;
        }


        void setCijena (int cijena){
        Cijena=cijena;
        }

        int getCijena(){
        return Cijena;
        }







void ispisiGosta(){

    cout<<endl<<"ID\t\tIme:\t\tPrezime\t\tGodine\t\tBroj Sobe\tBroj mobitela\t\tRacun"<<endl;
    cout<<endl<<"\t"<<ID<<ImeGosta<<"\t\t"<<Prezime<<"\t"<<Godine<<"\t\t"<<BrojSobe<<"\t\t"<<BrojMobitela<<"\t\t"<<Cijena<<endl;
            }






};

#endif
