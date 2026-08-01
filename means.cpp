/*Using a single for loop, calculate the arithmetic mean, harmonic mean, geometric mean, and root mean square of the numbers in the given array/vector, then print all four results.*/




#include <iostream>
using namespace std;
#include <cmath>

int main(){

    double vec[] = {1,2,3,4,5};
    int n = sizeof(vec)/sizeof(vec[0]); // dividing the bytes to get number of values in vector
    double ArithmeticMean;
	double HarmonicMean;
	double GeometricMean;
	double RootMeanSquare =0;
    double sum = 0;
    double sumOfReciprocals =0;
    double product = 1;
    double sumOfSquares =0;

    for(int i = 0;i<n;i++){
        sum = sum+vec[i];
        sumOfReciprocals = sumOfReciprocals+(1/vec[i]);
        product = product*vec[i];
        sumOfSquares = sumOfSquares + (vec[i]*vec[i]);

    }

    ArithmeticMean = sum/n;
    HarmonicMean = n/sumOfReciprocals;
    GeometricMean = pow(product,1.0/n);
    RootMeanSquare = sqrt(sumOfSquares/n);





















    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean   << endl;
	cout << "Geometric Mean  = " << GeometricMean  << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;
}