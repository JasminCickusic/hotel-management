#ifndef MENU_H
#define MENU_H
#include <vector>
#include"Menu.h"
#include<list>
#include"Gost.h"
#include "Radnik.h"


class Menu
{

    public:
        void ispisOpcije();
        void izaberiOpciju();
        void ispisOpcijeZaGosta();
        void addGost ();
        void dodajGosta(Gost &gost);
        void ispisiGosta ();
        void brisiGosta ();
        void provjeraSobe ();
        int  mojRacun ();
        void urediGosta();
        void dodajPohvalu();
        void dodajZalbu();
        void ispisPohvale();
        bool login();
        bool loginZaGosta();
        int Meni1 ();
        void dodajRadnika(Radnik &radnik);
        void addEmployee();
        void  urediRadnika();
        void brisiRadnika();
        int  netoPlata();
        void ispisZalbe();



        vector<Gost>listaGostiju;
        list <string>listaPohvala;
        vector <string>listaZalbi;
        vector<Radnik>listaRadnika;


        Menu();

        ~Menu();


};

#endif // MENU_H

