#include <iostream>
using namespace std;

bool isLeap(int year);
int main(){
    int year;
    cout << "Enter year: ";
    cin >> year;
    if(isLeap(year)){
        cout << "Leap";
    }else{
        cout << "Not leap";
    }
}

bool isLeap(int year){
    if(year%4 == 0 && year%100 != 0 || 
    year%400 == 0){
        return 1;

    }
    else{
        return 0;
    }
}