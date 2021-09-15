#include "../std_lib_facilities.h"

int main() {

	cout << "Enter the name of the person you want to write to and change the output to: ";

	string firstName;
	cin >> firstName;

	string friendName;
	cout << "Friend name: ";
	cin >> friendName;

	char friendSex = '0';
	cout << "Enter friend sex: (m/f):  ";
	cin >> friendSex;

	cout << "Enter your age: ";
	int age;
	cin >> age;

	string myName;
	cout << "Enter your name: ";
	cin  >> myName;

	
	cout << "\nDear " << firstName << ",\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "Added few more line.\n";
	cout << "Added few more line.\n";

	
	cout << "Have you seen " << friendName << " lately?\n";

	
	
	if (friendSex == 'm') {
		cout << "If you see "<< friendName << " please ask him to call me.\n";
	}
	if (friendSex == 'f') {
		cout << "If you see "<< friendName << " please ask her to call me.\n";
	}
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age > 110 || age < 0) {
		simple_error("your're kidding!");
	}
	if (age < 12) { 
		cout <<"Next year you will be " << age+1 << ".\n";
	}
	if (age == 17) {
		cout << "Next year you will be able to vote.\n";
	} 
	if (age > 70) {
		cout << "I hope you enjoy your retitement.\n";
	}

	cout << "Yours sincerely,\n\n\n";
	
	cout << myName << "\n";

	return 0;
}