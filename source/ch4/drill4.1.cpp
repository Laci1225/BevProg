#include "../std_lib_facilities.h"

int main() {

	double call1, call2;

	while ((cin >> call1 >> call2) && (call1 != '|' || call2 != '|' )) {
		

		if (call1 < call2) {
			cout << "smaller value is: " << call1 << " larger value is: " << call2 << "\n";

			}
		else if (call1 > call2) {
			cout << "smaller value is: " << call2 << " larger value is: " << call1 << "\n";
			}
		else if (call1 == call2)
			cout << "the numbers are equal \n";
		if (abs(call1 - call2) < 0.01 && call1 != call2)
				cout << "the numbers are almost equal\n";
	} 
	return 0;
}