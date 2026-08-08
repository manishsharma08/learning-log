#include <iostream>                                           // 11
                                                              // 21 22 
                                                              // 31 32 33 
                                                              // 41 42 43 44 45
                                                              // 51 52 53 54 55
int main(){
    int rows = 5;
    int col = 5;
    int ** arr;
    arr = new int * [rows];
    for(int r = 0;r<rows;r++){
        arr[r] = new int[r+1];
        for(int c = 0;c<=r;c++){
            arr[r][c] = (r+1)*10 + c + 1;
        }
    }

    for(int i = 0;i<rows;i++){
        for(int j = 0;j<=i;j++){
            std::cout << arr[i][j] << " ";
            
        }
       std::cout << std::endl;
}

}