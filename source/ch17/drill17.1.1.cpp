#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	 for(int i = 0; i < 10; i++){
	 	os << a[i] << '\n';
	 }
}	
void print_array(ostream& os, int* a, int n){
	for(int i = 0; i < n; i++){
	 	os << a[i] << '\n';
	 }
}

int main(){
	int* ten = new int[10];
	for(int i = 0; i < 10; i++){
		cout << ten[i] << ' ';
	}
	cout << '\n';
	delete[] ten;

	int hundred = 100;
	int* newten = new int[10];
	for(int i = 0; i < 10; i++){
		newten[i] = hundred++;
	}
	print_array10(cout, newten);
	cout << '\n';
	delete[] newten;

	hundred = 100;
	int* eleven = new int[11];
	for(int i = 0; i < 11; i++){
		eleven[i] = hundred++;
	}
	//print_array10(cout, newten);
	for(int i = 0; i < 11; i++){
	 	cout << eleven[i] << '\n';
	}
	delete[] eleven;

	hundred = 100;
	cout << '\n';
	int* twenty = new int[20];

	for(int i = 0; i < 20; i++){
		twenty[i] = hundred++;
	}
	print_array(cout, twenty,20);
	delete[] twenty;
	

	return 0;
}