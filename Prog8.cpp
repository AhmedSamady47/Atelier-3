#include <iostream>

using namespace std;

class Media{
public :
    virtual char *id();
    virtual void imprimer();
    string Titre;
};
class Livre : public  Media{
public  :
    string Titre, Auteur;
    void lireAuto();
};
class Audio : public Media{ 
    public :
        int Volume;
        int Vitesse;
};
class Disque : public Audio{
public : 
    int taille;
    string nom, auteur, prod;

};
class Presse : public Media{
public : 
string news, headline;  

};
class Journal : public Presse{
public :
    string news, info, section;
};