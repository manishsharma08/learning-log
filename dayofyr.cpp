#include <iostream>
using namespace std;

bool isLeap(int year);

int monthLenght(int year , int month);




struct Date{
    int year;
    int month;
    int day;
};
int dayOfYear(Date date);

int main(void) {

	Date date;
	cout << "Enter year, month, day: ";
	cin >> date.year >> date.month >> date.day;
	cout << dayOfYear(date) << endl;
	return 0;
}

int dayOfYear(Date date){
    // Start the total with the current day.
    int total = date.day;
     // Loop through all the months BEFORE the current month.
    for(int i = 1;i<(date.month);i++){
         // Add the number of days in each previous month.
        total += monthLenght(date.year,i);
        
    }
    return total;
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