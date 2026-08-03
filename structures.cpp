#include <iostream>
using namespace std;
#include <iomanip>


int main(){
    struct Time{
        int hours;
        int mins;

    };
    Time currenttime; // structure with time
    cout << "Enter hours: ";
    cin >>  currenttime.hours; // user inputs
    cout << "Enter minutes: ";
    cin >>  currenttime.mins;
    int extramins;

    if(currenttime.hours<0 ||
         currenttime.hours >=24 || // time can not be above 24 or below 0
          currenttime.mins>=60 ||
           currenttime.mins<0){


        cout << "wrong time input!";

    }
    else{ 
        cout << "Enter extra minutes: ";
        cin >> extramins;
        currenttime.mins += extramins; //extra mins gets added into og mins
        if(currenttime.mins>=60){
            currenttime.hours += (currenttime.mins/60); 
            currenttime.mins = currenttime.mins%60;
        }
        if(currenttime.hours>=24){ // error i did (used else if) , using else if basically makes this block of code dissapear because the first if is true
            currenttime.hours = currenttime.hours % 24;
        }

    }

    cout << setfill('0') << setw(2) << currenttime.hours << ":" << setw(2) << currenttime.mins;
    //SETW -> SET WIDTH
    // SETFILL -> FILLS EMPTY SPACES WITH ARGUEMENT

    
    
}