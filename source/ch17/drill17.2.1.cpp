#include "../std_lib_facilities.h"


int main(){

	int x = 7;
	int* p1 = &x;
	cout << "Adress of p1: " << p1 	<< " Points to: " << *p1 <<'\n';
	
	int* p2 = new int[7];
	for(int i = 0; i < 7; i++)
		p2[i] = pow(2,i);

	cout << "Adress of p2: " << p2<< '\n';
	
	for(int i = 0; i < 7; i++)
	 	cout << "p2["<<i<<"]: " <<p2[i]<<' ';

	cout << '\n';	

	int* p3 = p2;
	p1 = p2;
	p3 = p2;	
	cout << "Adress of p1: " << p1<< " Points to: " << *p1 << '\n';
	
	cout << "Adress of p2: " << p2<< " Points to: " << *p2 << '\n';

	delete[] p1;//vagy p2 vagy p3 mert ugyanoda mutatnak;

	p1 = new int[10];

	for(int i = 0; i < 10; i++)
		p1[i] = pow(2,i);
	
	p2 = new int[10];
	
	for(int i = 0; i < 10; i ++)
		p2[i] = p1[i];

	delete[] p1;
	delete[] p2;
	
	return 0;
}
