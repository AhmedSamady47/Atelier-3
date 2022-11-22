#include <iostream>
using namespace std;
class Animal{
    public:
    string nom;
    int age;
    void set_value(string nom, int age){
        this->age=age;
        this->nom=nom;
    }
};
class Zebra: public Animal{
    public:
    void showZ(){
        cout<<"ce zebra est nomme "<<nom<<", il est "<<age<<" ans"<<endl;
    }     
};
class Dolphin: public Animal{
    public:
    void showD(){
        cout<<"ce dolphin est nomme "<<nom<<", il est "<<age<<" ans"<<endl;
    }
};
// Driver code
int main(){
    Zebra A;
    Dolphin B;
    A.set_value("Farid",5);
    B.set_value("Hassan",2);
    A.showZ();
    B.showD();
    return 0;
}