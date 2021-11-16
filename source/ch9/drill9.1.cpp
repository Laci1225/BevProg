#include "../std_lib_facilities.h"

struct Date {
	int y, m, d;
};

void init_day(Date& dd, int y, int m, int d)
{
	dd.y = y;
	if(m > 0 && m <= 12) dd.m = m; else error("Invalid month");
	if(d > 0 && d <= 31 ) dd.d = d; else error("Invalid day");
}

void add_day(Date& dd, int n)
{
	dd.d += n;
	if(dd.d > 31) {
		int a = dd.d / 31;
		dd.m = dd.m + a*1;
		dd.d-= a * 31;
	}
	if(dd.m > 12) {
		int a = dd.m / 12;
		dd.y = dd.y + a*1;
		dd.m -= a * 12;
	}
}

int main(){

	Date today;

	init_day(today, 1978, 06, 25);

	cout << "Today: " << today.y << ' ' << today.m << ' ' << today.d << '\n';
	
	Date tomorrow = today;
	add_day(tomorrow,1);
	
	cout << "Tomorrow: " << tomorrow.y << ' ' << tomorrow.m << ' ' << tomorrow.d << '\n';

	/*Date invalid;

	init_day(invalid, 2004, 13, -5);*/ //invalid month

	return 0;
}