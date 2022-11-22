#include <iostream>
#include <cmath>
using namespace std;
class vecteur3d {
	public:
	float x;
	float y;
	float z;	
	vecteur3d(float x=0, float y=0, float z=0){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	void affiche() {
		cout<<"("<<x<<","<<y<<","<<z<<")"<< endl;
	}
	vecteur3d somme(vecteur3d &v) {
		vecteur3d s;
		s.x = x + v.x;
		s.y = y + v.y;
		s.z = z + v.z;
		return vecteur3d(x+v.x, y+v.y, z+v.z);
	}
	
	float produit(vecteur3d &v){
		return x*v.x + y*v.y + z*v.z;
	}
	
	bool coincide(vecteur3d &v){
		return (x == v.x && y == v.y && z == v.z);
	}
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
	vecteur3d normax(vecteur3d v){
		if( this->norme() > v.norme())
		    return *this;
		return v;
	}
	vecteur3d *normax(vecteur3d *v){
		if( this->norme() > v->norme())
		    return this;
		return v;
	}
	vecteur3d &normaxR(vecteur3d &v){
		if( this->norme() > v.norme())
		    return *this;
		return v;
	}
};
// Driver code
int main() {
	vecteur3d v1(8,5,2);
	cout << "Vecteur V1";
	v1.affiche();
	vecteur3d v2(2,3,9);
	cout << "Vecteur V2";
	v2.affiche();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.somme(v2)).affiche();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
	cout<<endl;
	cout << "Copier le vecteur V1 dans V3:" << endl;
	vecteur3d v3(v1);
	cout << "Vecteur V3";
	v3.affiche();
	if(v1.coincide(v3)){
		cout << "Les vecteurs v1 et v3 coincident " << endl;
	} else{
		cout << "Les vecteurs v1 et v3 ne coincident pas " << endl;
	}
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).affiche();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->affiche();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normaxR(v2)).affiche();
	cout<<endl;
}