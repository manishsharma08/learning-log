#include <iostream>
using namespace std;

int main(){
    int choice,x;
    double a,b;
    cout << "MENU" << endl;
    cout << "0 - Exit" << endl;
    cout << "1 - addition" << endl;
    cout << "2 - subtraction" << endl;
    cout << "3 - multiplication" << endl;
    cout << "4 - division" << endl;
    x = choice;

    while(x>0){
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: cout << "enter no1: ";
            cin >> a;
            cout << "enter no2: ";
            cin >> b; 
            cout << "ans: " << a+b; break;
           case 2: cout << "enter no1: ";
            cin >> a;
            cout << "enter no2: ";
            cin >> b; 
            cout << "ans: " << a-b; break;
            case 3: cout << "enter no1: ";
            cin >> a;
            cout << "enter no2: ";
            cin >> b; 
            cout << "ans: " << a*b; break;
            case 4: cout << "enter no1: ";
            cin >> a;
            cout << "enter no2: ";
            cin >> b;
            if(a && b != 0){
            cout << "ans: " << a/b;
            }else{
                cout << "can not divide by 0";
            }break;
    
    }
    cout << endl;
    cout << "Do you wish to continue:  1(y) and 0(n)";
    cin >> x;
}
}