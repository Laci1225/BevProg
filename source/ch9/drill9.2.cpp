#include "../std_lib_facilities.h"

struct Date {
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d){

	Date::y = y;
	if(m > 0 && m <= 12) Date::m = m; else error("Invalid month");
	if(d > 0 && d <= 31 ) Date::d = d; else error("Invalid day");
}
void Date::add_day(int n){

	d += n;

	if(d > 31) {
		int a = d / 31;
		m = m + a*1;
		d-= a * 31;
	}

	if(m > 12) {
		int a = m / 12;
		y = y + a*1;
		m -= a * 12;
	}
}

int main(){

	Date today {1978, 06, 25};

	cout << "Today: " << today.y << ' ' << today.m << ' ' << today.d << '\n';

	Date tomorrow = today;

	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.y << ' ' << tomorrow.m << ' ' << tomorrow.d << '\n';

	//Date invalid {2004, 13, -5}; //invalid month

	return 0;
}

