#include <iostream>

int main(){
    float *arr;
    

    arr = new float[5];
    for(int i = 0;i<5;i++){

        arr[i] = i*i;
    }
    for(int i = 0;i<5;i++){
        std::cout << arr[i] << " ";
        
        
    }
    delete[] arr;
}
