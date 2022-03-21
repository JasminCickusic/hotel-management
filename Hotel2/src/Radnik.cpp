#include"Radnik.h"
#include "Menu.h"

Radnik::Radnik()
{
    //ctor
}

Radnik::~Radnik()
{
    //dtor
}


void Menu::addEmployee (){
    Radnik radnik;
    cout<<"\nEnter Information"<<endl;
    dodajRadnika(radnik);
    radnik.setNetoPlata(netoPlata());
    this->listaRadnika.push_back(radnik);
    radnik.ispisRadnika();
    }

    void Menu::dodajRadnika(Radnik &radnik){
    int id;
    cout<<"Upisi id:"<<endl;
    cin>>id;
    radnik.setID(id);
    string ime;
    cout<<"Upisi ime radnika"<<endl;
    cin>>ime;
    radnik.setImeRadnika(ime);
    string prezime;
    cout<<"Unesite prezime:"<<endl;
    cin>>prezime;
    radnik.setPrezime(prezime);
    int godine;
    cout<<"Unesite godine"<<endl;
    cin>>godine;
    radnik.setGodine(godine);
    int brM;
    cout<<"Unesite broj mobitela"<<endl;
    cin>>brM;
    radnik.setBrojMob(brM);
    string pozicija;
    cout<<"Unesite poziciju Vaseg radnika";
    cin>>pozicija;
    radnik.setPozicija(pozicija);

}


void Menu::brisiRadnika(){
    int broj=0;
    int id;
    bool nadjen=false;
    cout<<"Unesite ID gosta kojeg zelite ukolniti!"<<endl;
    cin>>id;
    for(Radnik r: listaRadnika){
           if(r.getID()==id){
           nadjen=true;
           break;
    }
    broj++;
    }
    if(nadjen){
    listaRadnika.erase(listaRadnika.begin()+broj);
    cout<<"Radnik sa ID-om"<<id<<"je uklonjen";

    }

        }



int Menu::netoPlata () {
    cout<<"1.Menadzer\t\t4.Wellnes terapeut\n2.Recepcioner\t\t5.Ugositelj\n3.Marketar\t\t6.Sobarica"<<endl;
    cout<<"Odaberite radno mjesto zaposlenika:"<<endl;
    int i;
    cin>>i;
    int radniD;
    int sat;
    int naradjeniSati;
    int plata;
    if (i==1 || i==2 || i==3){
            plata=0;
        int dnevnica=50;
        cout<<"Unesite broj radnih dana u mjescu"<<endl;
        cin>>radniD;
        plata+=(radniD*dnevnica);
        cout<<"Unesite broj sati prekovremenog rada:"<<endl;
        cin>>sat;
        plata+=(sat*5);
        cout<<"Ukupna vrijednost plate za ovog radnika je:"<<plata<<endl;
    }else if(i==4||i==5||i==6) {
        plata=0;
        int dnevnica2=30;
        cout<<"Unesite broj radnih dana u mjesecu"<<endl;
        cin>>radniD;
        plata+=(radniD*dnevnica2);
        cout<<"Unesite broj sati prekovremenog rada:"<<endl;
        cin>>sat;
        plata+=(5*sat);
        cout<<"Ukupna vrijednost plate za ovog radnika je:"<<plata<<endl;

      }else{

            cout<<"Unos je neodgovarajuci"<<endl;
            ispisOpcije();
            izaberiOpciju();
            }
            return plata;
}

void Menu::urediRadnika( ){
     cout<<"Unesite ID radnika gdje zelite praviti izmjene"<<endl;
     int unos;
     cin>>unos;
     vector<Radnik>::iterator it;
     for (it=listaRadnika.begin();it!=listaRadnika.end();it++){
     if(it->getID()==unos){
       long int izmjena;
     string izmjena2;
     cout<<"Unesite novo ime"<<endl;
     cin>>izmjena2;
     it->setImeRadnika(izmjena2);
     cout<<"Unesite novo prezime"<<endl;
     cin>>izmjena2;
     it->setPrezime (izmjena2);
     cout<<"Unesite nove godine"<<endl;
     cin>>izmjena;
     it->setGodine(izmjena);
     cout<<"Unesite novi broj sobe"<<endl;
     cin>>izmjena;
     it->setPrezime(izmjena2);
     cout<<"Unesite novi broj Mobitela"<<endl;
     cin>>izmjena;
     it->setBrojMob(izmjena);
     string pozicija;
     cout<<"Unesite novu poziciju:"<<endl<<endl;
     it->setPozicija(pozicija);

    }
      }

        }




