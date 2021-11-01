#include "my.h"
#include "../std_lib_facilities.h"



void swap_v(int a, int b){
 	int temp; temp = a; a=b; b=temp;
}
void swap_r(int& a, int& b){ 
	int temp; temp = a; a=b; b=temp;
}

/*void swap_cr(const int& a, const int& b){
	 int temp; temp = a;a=b; b=temp;		
	 								// error: read-only reference all swap_cr
}*/


int main() {
	int x = 7;
	int y = 9;
	swap_v(x,y);         // x = 7, y = 9
	swap_r(x,y);         // x = 9, y = 7
	//swap_cr(x,y);      error: read-only reference

	swap_v(7,9);         // 
	//swap_r(7,9);       error: int& to int
	//swap_cr(7,9);  	 error: read-only reference 

	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy); //    cx = 7, cy = 9
	//swap_r(cx,cy);     error: int& to const int
	//swap_cr(cx,cy);    error: read-only reference
	
	swap_v(7.7,9.9);     //
	//swap_r(7.7,9.9);   error: int& to int
	//swap_cr(7.7,9.9);  error: read-only reference 
	
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);       // dx = 7.7 dy = 9.9;
	//swap_r(dx, dy);    error: int& to int
	//swap_cr(dx,dy);    error: read-only reference
}
