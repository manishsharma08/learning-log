#include <iostream>
using namespace std;
#include <iomanip>


int main(){

    struct Time{
        int hrs;
        int mins;
    };
    int hrdiff , mindiff;
    Time stime; //start time
    Time etime; // end time
    cout << "Enter start time (HH MM, 24-hour clock):: ";
    cin >> stime.hrs;
    cin >> stime.mins;
    cout << "Enter end time (HH MM, 24-hour clock):: ";
    cin >> etime.hrs;
    cin >> etime.mins;


    if (
    stime.hrs < 0 || stime.hrs >= 24 ||
    stime.mins < 0 || stime.mins >= 60 ||

    etime.hrs < 0 || etime.hrs >= 24 ||
    etime.mins < 0 || etime.mins >= 60 ||

    etime.hrs < stime.hrs ||

    (etime.hrs == stime.hrs && etime.mins < stime.mins)
)
{
    cout << "error";
}

    else{
        if(etime.mins<stime.mins){
            etime.mins += 60;
            etime.hrs --;
        }
        hrdiff = etime.hrs - stime.hrs;
        mindiff = etime.mins - stime.mins;

    cout <<setfill('0')<<setw(2)<< hrdiff << ":" <<setw(2)<< mindiff;   

    }
    
}
    
