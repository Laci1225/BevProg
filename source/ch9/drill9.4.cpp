#include "../std_lib_facilities.h"

class Year {
	static constexpr int min = 1800;
	static constexpr int max = 2200;
public:
class Invalid { };
	Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
	int year() { return y; }
	void incr() { y++;}
private:
	int y;
};

enum class Month {
jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m){
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m){
	return os << int(m);
}
ostream& operator<<(ostream& os, Year y){
	return os << y.year();
}
Year operator++(Year& y){
	y.incr();
	return y;
}
class Date {
	Year ye;
	Month mo;
	int da;
public:
	class Invalid{};
	//Date(): ye(Year{1978}), mo(Month::jun), da(25){}
	Date(Year y, Month m, int d): ye(y), mo(m), da(d) {if(!valid()) throw Invalid{};}
	void add_day(int n);
	bool valid();
	Month month() { return mo; }
	int day() { return da; }
	Year year() { return ye; }
};

bool Date::valid(){
	if(da > 0 && da <= 31 ) return true;
	else return false;
}
void Date::add_day(int n){

	da += n;

	if(da > 31) {
		++mo;
		da-= 31;
	}

	if(mo == Month::jan) {
		++ye;
	}
}

int main(){
	try{
	Date today {Year{1978}, Month::jun, 25};

	cout << "Today: " << today.year() << ' ' << today.month() << ' ' << today.day() << '\n';

	Date tomorrow = today;

	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.year() << ' ' << tomorrow.month() << ' ' << tomorrow.day() << '\n';

	//Date invalid {Year{2004}, Month::dec, -5}; //invalid day

	return 0;
	}
	catch(Date::Invalid){
		cerr << "Invalid day";
		return 1;
	}
	catch(exception& e){
		cerr << e.what();
		return 2;
	}
	catch(Year::Invalid){
		cerr << "Invalid year"<<'\n';
		return 3;
	}
	catch(...){
		cerr << "Some error";
		return 4;
	}
}

