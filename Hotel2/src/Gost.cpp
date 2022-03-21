#include "Gost.h"
#include "Menu.h"
#include <string>

Gost::Gost()
{
    //ctor
}

Gost::~Gost()
{
    //dtor
}


void Menu::addGost (){
    Gost gost;
    cout<<"\nEnter Information"<<endl;
    dodajGosta(gost);
    gost.setCijena(mojRacun());
    this->listaGostiju.push_back(gost);
    gost.ispisiGosta ();
    }

    void Menu::dodajGosta (Gost &gost){

    cout<<"Unesite ID:"<<endl;
    long int id;
    cin>>id;
    gost.setID(id);
    cout<<"ID:"<<gost.getID();
    cout<<endl;
    cout<<"Unesite ime gosta:"<<endl;
    string ime;
    cin>>ime;
    gost.setImeGosta(ime);
    cout<<"Ime:"<<gost.getImeGosta()<<endl;

    cout<<"Unesite prezime: "<<endl;
    string prezime;
    cin>>prezime;
    gost.setPrezime(prezime);
    cout<<"Prezime:"<<gost.getPrezime()<<endl;
    cout<<"Broj Sobe:"<<endl;
    int br;
    cin>>br;
    gost.setBrojSobe(br);
    cout<<"Broj sobe je:"<<gost.getBrojSobe()<<endl;
    cout<<"Broj godina:"<<endl;
    int godine;
    cin>>godine;
    gost.setGodine(godine);
    cout<<"Godine su:"<<gost.getGodine();
    cout<<endl;
    cout<<"Unesite broj mobitela:"<<endl;
    int br2;
    cin>>br2;
    gost.setBrojMobitela(br2);
    cout<<"Broj mobitela je :"<<gost.getBrojMobitela()<<endl;
    cout<<endl;

    }



void Menu::provjeraSobe(){
    int uneseniBroj;
    cout<<"Unesite broj za provjeru sobe"<<endl;
    cin>>uneseniBroj;
    for(Gost g: listaGostiju){
    if(g.getBrojSobe()==uneseniBroj){
    cout<<"ID gosta u sobi broj"<<" "<<uneseniBroj<<" "<<"je"<<endl;
    cout<<g.getID()<<endl;
 break;

    }
       }
           }

void Menu::urediGosta( ){
     cout<<"Unesite ID gosta gdje zelite praviti izmjene"<<endl;
     int unos;
     cin>>unos;
     vector<Gost>::iterator it;
     for (it=listaGostiju.begin();it!=listaGostiju.end();it++){
     if(it->getID()==unos){
       long int izmjena;
     string izmjena2;
     cout<<"Unesite novo ime"<<endl;
     cin>>izmjena2;
     it->setImeGosta(izmjena2);
     cout<<"Unesite novo prezime"<<endl;
     cin>>izmjena2;
     it->setPrezime (izmjena2);
     cout<<"Unesite nove godine"<<endl;
     cin>>izmjena;
     it->setGodine(izmjena);
     cout<<"Unesite novi broj sobe"<<endl;
     cin>>izmjena;
     it->setBrojSobe(izmjena);
     cout<<"Unesite novi broj Mobitela"<<endl;
     cin>>izmjena;
     it->setBrojMobitela(izmjena);


    }
}

     }


void Menu::brisiGosta(){
    int broj=0;
    int id;
    bool nadjen=false;
    cout<<"Unesite ID gosta kojeg zelite ukolniti!"<<endl;
    cin>>id;
    for(Gost g: listaGostiju){
           if(g.getID()==id){
           nadjen=true;
           break;

        }

     broj++;

    }
    if(nadjen){
    listaGostiju.erase(listaGostiju.begin()+broj);
    cout<<"Gost sa ID-om"<<id<<"je uklonjen"<<endl;
         }

    }



int Menu:: mojRacun (){
    int total=0;
    int trenutna_suma=0;
    int brojDana;
    int brojKreveta;
    int brojObroka;
    cout<<endl<<"Dobro dosli u sistem pruzanja usluga za korisnike hotela :) \n Molimo Vas,u nastavku dopunite date stavke."<<endl;
    cout<<endl<<"Unesite broj dana:"<<endl;
    cin>>brojDana;
    trenutna_suma+=(brojDana*100);
    cout<<"Unesite broj kreveta"<<endl;
    cin>>brojKreveta;
    trenutna_suma+=(brojKreveta*20);
    cout<<"Unesite broj dnevnih obroka"<<endl;
    cin>>brojObroka;
    trenutna_suma+=(brojObroka*20);
    cout<<endl<<"U ponudi imate i dodatne uslogu.\nCijena za neograniceno koristenju u iznosu 500 KM (full) \nMozete odbrati i pojedinacne usluge, u iznosu od 200 KM:\n\t1.Wellnes\n\t2.Teretana\n\t3.Bazen" <<endl;
    string izbor;
    cout<<"Vas izbor je :"<<endl;
    cin>>izbor;
    if (izbor=="full"){
        trenutna_suma+=500;

    }else if (izbor=="wellnes"|| izbor=="teretana"||izbor=="bazen"){
      trenutna_suma+=trenutna_suma+200;
    } else {
    trenutna_suma+=0;
    }
    total=trenutna_suma;
        cout<<"+---------------------+";
    cout<<endl<<"Vas racun iznosi: "<<total<<""<<"KM (BAM)"<<endl;
        cout<<"+---------------------+";
    float euro;
    euro=(total/1.96);
    cout<<endl<<"Vas racun iznosi: "<<euro<<" "<<"€(EUR)"<<endl;
        cout<<"+---------------------+";
        return total;
    }

void Menu::dodajPohvalu (){
    string pohvala;
    cout<<endl<<"Unesite tekst"<<endl;
    getline(cin>>ws, pohvala);
    cout<<endl;
    cout<<"Vasa pohvala ce biti uvazena!"<<endl;
    this->listaPohvala.push_back(pohvala);
}

 void Menu::dodajZalbu (){
    cout<<endl<<"Unesite tekst:"<<endl;
    string zalba;
    getline(cin>>ws, zalba);
    cout<<endl;
    cout<<"Vasa zalba ce biti uvazena!"<<endl;
    this->listaZalbi.push_back(zalba);
}




    void Menu::ispisPohvale(){
    cout<<"#Pohvale koje su pristigle u prethodnom periodu#"<<endl;
    vector<string>::iterator it;
    for (auto it=listaPohvala.begin();it!=listaPohvala.end();it++)
    cout<<endl<<*it;

}

void Menu::ispisZalbe(){
    cout<<"#Zalbe koje su pristigle u prethodnom periodu#"<<endl;
    vector<string>::iterator it;
    for (auto it=listaZalbi.begin();it!=listaZalbi.end();it++)
    cout<<endl<<*it;


}

