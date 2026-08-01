#include <iostream>
using namespace std;

int main(){
   int vec1[5] = {1,2,3,2,1};
   bool pal = true;
   

   for(int i =0;i<5;i++){
    if(vec1[i]!=vec1[4-i]){
        cout << "Not Palendrome";
        pal = false;
        break;

    }
   }
    if(pal){
        cout << "It is a Palendrome";
    }
    
        
        
    



   }
