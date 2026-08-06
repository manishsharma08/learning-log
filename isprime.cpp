#include <iostream>
using namespace std;
#include <cmath>

bool isprime(int num){
    if(num<=1){
        return false;
    }
    for(int i = 2; i<=sqrt(num);i++){
        if(num % i   == 0){
            return false;
        }else{
            
        }
        
    }
    return true;
}


int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isprime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}