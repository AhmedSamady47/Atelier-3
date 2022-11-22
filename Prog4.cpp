#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass();
    ~MyClass();
};
MyClass::MyClass(){
	cout<<"Constructor Invoked"<<endl;
	cout<<"Constructor Outside Class Invoked"<<endl;
}
MyClass::~MyClass(){
	cout<<"Destructor Invoked"<<endl;
	cout<<"Destructor Outside Class Invoked"<<endl;
}
// Driver code
int main(void)
{
    MyClass objet;
    return 0;
}
