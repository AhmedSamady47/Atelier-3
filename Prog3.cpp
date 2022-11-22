#include <iostream>
using namespace std;
class complexe {
public:
    float Re;
    float Img;
    complexe(double a = 0, double b = 0)
    {
        Re = a;
        Img = b;
    }
    void afficher()
    {
    	cout << Re;
        if (Img >= 0)
            cout << " + ";
            
        cout << Img << "i" << endl;
    }
    complexe operator+(complexe a)
    {
        complexe s;
        s.Re = Re + a.Re;
        s.Img = Img + a.Img;
        return s;
    }
    complexe operator+(double x)
    {
        complexe s;
        s.Re = Re + x;
        s.Img = Img;
        return s;
    }
    complexe operator-(complexe a)
    {
        complexe s;
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
    complexe operator*(complexe a)
    {
        complexe p;
        p.Re = Re * a.Re - Img * a.Img;
        p.Img = Re * a.Img + Img * a.Re;
        return p;
    }
    friend complexe operator+(double, complexe);

};    
complexe operator/( complexe a, float x)
{
    complexe d;
    d.Re = a.Re / x;
    d.Img = a.Img / x;
    return d;
}
complexe operator+(double x, complexe a)
{
    complexe s;
    s.Re = a.Re + x;
    s.Img = a.Img;
    return s;
}
// Driver code
int main()
{
    complexe a(5, 6), b(3, 4), c;
    cout << "A = ";
    a.afficher();
    cout << "B = ";
    b.afficher();
    
    cout << "A + B = ";
    c = (a + b);
	c.afficher();
    
    cout << "A + 12 = ";
    c = (a + 12);
	c.afficher();
    
    cout << "8 + A = ";
    c = (8 + a);
	c.afficher();
    
    cout << "A * B = ";
    c = (a * b);
	c.afficher();
    
    cout << "B - A = ";
    c = (b - a);
	c.afficher();

    cout << "A / 12 = ";
    c = (a / 12);
	c.afficher();
}