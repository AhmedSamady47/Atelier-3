#include <iostream>
using namespace std;
class personne {
    protected:
    string nom, prenom;
    int j,m,a;
    public:

    void afficher(string nom, string prenom, int j, int m, int a){
        cout<<"Personne: "<<endl;
        cout<<"Nom: "<<nom<<endl;
        cout<<"Preom: "<<prenom<<endl;
        cout<<"Date de naissance (jj/mm/aaaa): "<<j<<"/"<<m<<"/"<<a<<endl;
    }
};
class employe: public personne{
    public:
    int salaire;
    void afficher(string nom, string prenom, int j, int m, int a, int salaire){
        cout<<"Employe: "<<endl;
        cout<<"Nom: "<<nom<<endl;
        cout<<"Preom: "<<prenom<<endl;
        cout<<"Date de naissance (jj/mm/aaaa): "<<j<<"/"<<m<<"/"<<a<<endl;
        cout<<"Salaire: "<<salaire<<endl; 
    }
};    
class chef: public employe{
    public:
    string service;
    void afficher(string nom, string prenom, int j, int m, int a, int salaire,string service){
        cout<<"Chef: "<<endl;
        cout<<"Nom: "<<nom<<endl;
        cout<<"Preom: "<<prenom<<endl;
        cout<<"Date de naissance (jj/mm/aaaa): "<<j<<"/"<<m<<"/"<<a<<endl;
        cout<<"Salaire: "<<salaire<<endl;
        cout<<"Service accompagné: "<<service<<endl;
    }
};
class directeur: public chef{
    public:
    string societe;
    void afficher(string nom, string prenom, int j, int m, int a, int salaire,string service,string societe){
        cout<<"Directeur: "<<endl;
        cout<<"Nom: "<<nom<<endl;
        cout<<"Preom: "<<prenom<<endl;
        cout<<"Date de naissance (jj/mm/aaaa): "<<j<<"/"<<m<<"/"<<a<<endl;
        cout<<"Salaire: "<<salaire<<endl;
        cout<<"Service accompagné: "<<service<<endl;
        cout<<"Societe accompagné: "<<societe<<endl;
    }
};
// Driver code
int main(){
    personne p;
    p.afficher("Samady","Ahmed",2,11,2002);
    cout<<endl;
    employe e;
    e.afficher("Majdoub","Mohamed",03,06,1965,5000);
    cout<<endl;
    chef c;
    c.afficher("El Massti","Mounir",9,04,2000,9000,"Gestion equipe");
    cout<<endl;
    directeur d;
    d.afficher("MentoZa","Omar",27,9,2000,10000,"Gestion societe","Atlas Maroc");
}