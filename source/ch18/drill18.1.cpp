#include "../std_lib_facilities.h"

int ga[10] {1,2,4,8,16,31,64,128,256,512};

/*void initialize(int array[], int i){
	for(int i = 0; i < 10; i ++)
		ga[i] = pow(2,i);
}*/


void f(int array[], int number){
	int la[10];

	for(int i = 0; i < 10; i ++)
		la[i] = array[i];

	for(int i = 0; i < 10; i ++)
		cout << la[i] << ' ' ;
	cout << '\n';

	int* p = new int[number];
	for(int i = 0; i < 10; i ++)
		p[i] = array[i];

	for(int i = 0; i < 10; i ++)
		cout << p[i] << ' ' ;
	cout << '\n';
	delete[] p;
}

int main(){

	f(ga,10);

	int aa[10];

	int factorial = 1;
	for(int i = 1; i < 11; i++){
		factorial *= i;
		aa[i-1] = factorial;
	}

	f(aa,10);

}