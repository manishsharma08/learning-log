#include <iostream>
using namespace std;
#include <ctime>

struct Date{
    int year;
    int month;
    int day;
};

Date today();



int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}

Date today(){
    Date d;
    time_t t = time(NULL);
    tm t1 = *localtime(&t);
    d.year = t1.tm_year + 1900;
    d.month = t1.tm_mon + 1;
    d.day = t1.tm_mday;
    return d;
}