#include "../std_lib_facilities.h"

vector<int> gv{1,2,4,8,16,31,64,128,256,512};

/*void initialize(vector<int> vr){
	for(int i = 0; i < vr.size(); i ++)
		vr[i] = pow(2,i);
}*/

void f(vector<int>& vr){
	vector<int> lv(10);

	for(int i = 0; i < lv.size(); i ++)
		lv[i] = vr[i];

	for(int i = 0; i < lv.size(); i ++)
		cout << lv[i] << ' ' ;
	cout << '\n';

	vector<int> lv2(vr.size());
	lv2 = vr;
	for(int i = 0; i < lv2.size(); i ++)
		cout << lv2[i] << ' ' ;
	cout << '\n';
}

int main(){

	f(gv);	

	vector<int> vv(10);
	int factorial = 1;
	for(int i = 1; i < vv.size()+1; i++){
		factorial *= i;
		vv[i-1] = factorial;
	}
	f(vv);

}