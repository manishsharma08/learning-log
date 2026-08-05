#include <iostream>
using namespace std;

bool isLeap(int year);
int main(void) {

	for(int yr = 1995; yr < 2017; yr++) 
		cout << yr << " -> " << isLeap(yr) << endl;
	return 0;
}

bool isLeap(int year){
        return((year%400 == 0) || (year%4 == 0 && year%100 != 0));
}