#include <iostream>
using namespace std;

int main(){
    int vector1[7] = {4,7,2,8,1,3,0};
    int vector2[7]; //{0,3,1,8,2,7,4}
    

    vector2[0] = vector1[6];

    for(int i = 1;i<7;i++){
        vector2[i] = vector1[i-1];
    }

    for(int i = 0;i<7;i++){
        cout << vector2[i] << " ";
    }
    
}