#include <iostream>
using namespace std;
class Mother {
    public:
     void display(){
        cout<<"class mere"<<endl;
     }
    };
class Daughter: public Mother{
    void diplay(){
        cout<<"class fille"<<endl;
    }
};
// Driver code
int main(){
    Daughter A;
    cout<<endl;
    A.display();
    return 0;
}