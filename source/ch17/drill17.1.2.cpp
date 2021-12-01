#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a){
	 for(int i = 0; i < 10; i++){
	 	os << a[i] << '\n';
	 }
}	
void print_vector(ostream& os, vector<int> a){
	for(int i = 0; i < a.size(); i++){
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

	vector<int> myvector(10);

	int hundred = 100;
	for(int i = 0; i < myvector.size(); i++){
		myvector[i] = hundred++;
	}
	print_vector(cout, myvector);
	cout << '\n';

	vector<int> myvector11(11);

	hundred = 100;
	for(int i = 0; i < myvector11.size(); i++){
		myvector11[i] = hundred++;
	}
	print_vector(cout, myvector11);
	cout << '\n';

	vector<int> myvector20(20);

	hundred = 100;
	for(int i = 0; i < myvector20.size(); i++){
		myvector20[i] = hundred++;
	}
	print_vector(cout, myvector20);
	

	return 0;
}