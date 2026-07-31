#include <iostream>
using namespace std;

int main(){
    int n,nl;
    
    // n = 13 or 1101
    int reversed = 0;
    cout << "Enter number for palendrome: ";
    cin >> n;
    int og = n;

    while(n>0){
        nl = n&1;
        
        

        reversed = reversed << 1;
        reversed = reversed | nl;

        n = n >> 1;

    }
    if(reversed == og){
        cout << "It is a bitwise pallendrome";
    }else{
        cout << "Not a bitwise palendrome";
    }


}