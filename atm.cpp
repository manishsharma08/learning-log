/* Question: Once upon a time there was a country called Plusplusland. The monetary system they used there was simple: the currency name was the "plussar" and their central bank issued five different banknotes of values 50, 20, 10, 5 and 1 plussar.

Your task is to write a driver for the ATMs of Plusplusland. The driver should find the minimal number of banknotes needed to deliver any amount of money to the client.

The Treasury Minister has asked you personally to do this. He expects your code to print the values of all the needed banknotes in a row – this is the format accepted by all ATMs in Plusplusland.

Test your code using the data we've provided.*/


#include <iostream>
using namespace std;

int main(){
    int amt;
    cout << "Enter amount: ";
    cin >> amt; // 125
    int banknotes[5] = {50,20,10,5,1};
    for(int i=0;i<5;i++){
        if(amt>=banknotes[i]){
            cout << banknotes[i] << " ";
            amt = amt-banknotes[i];
            i--; //25
        }

        
    }
}