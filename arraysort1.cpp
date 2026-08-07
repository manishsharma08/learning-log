#include <iostream>
using namespace std;


int main(){
    int arr[5];
    int store;
    bool swapped;
    // storing values
    for (int i = 0;i<5;i++){
        cout << "enter value for array: ";
        cin >> arr[i];
    }
    // sorting 
    do{
        swapped = false;
    
    for(int i = 0;i<4;i++){
        if(arr[i] > arr[i+1]){
            swapped = true;
            store = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = store;
        }
    }

    } while(swapped);
    cout << "Sorted array: ";
        for(int i=0;i<5;i++){
            cout << arr[i];
        }
    

}