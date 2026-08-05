#include <iostream>
using namespace std;

bool isLeap(int year);

int monthLenght(int year , int month);



int main(){
    for(int year = 2000; year < 2002; year++) {
		for(int month = 1; month <= 12; month++)
			cout << monthLenght(year,month) << " ";
		cout << endl;
	}
	return 0;
}

int monthLenght(int year , int month){
    if(month<1 || month>12){
        return 0;
    }if(month == 2){
        if(isLeap(year)){
            return 29;
        }else{
            return 28;
        }
    }
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return days[month-1];
}


bool isLeap(int year){
        return((year%400 == 0) || (year%4 == 0 && year%100 != 0));
}