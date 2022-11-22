#include <iostream>
using namespace std;
class test{
	int static z;
	public:
		void call(){
			cout<<endl<<"I am function call()";
			z++;
		}
		void aff(){
			cout<<endl<<"le nombre de fois qu on a appele fct call() est: "<<z;
			
		}
};
int test::z=0;
main(){
	test T;
	T.call();
	T.call();
	T.aff();
}