#include <iostream>
using namespace std;


void printnum();
int main(){
    cout << "My first function"<< endl;
    printnum();
}

void printnum(){
    int x = 10;
    int  y  = 12;
    cout << "first num is " << x << endl;;
    cout << "second num is " << y;
}