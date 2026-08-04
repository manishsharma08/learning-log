
    // obj -> using pointers finding smallest element;
    #include<iostream>
    using namespace std;

    int main(){
        int vector[] = {3,-5,-7,10,-4,14,5,2,-13};
        int n = sizeof(vector)/sizeof(vector[0]);
        int *p = vector;
        int min = *p;

        for(;p<vector + n;p++){
            if(min>*p){
                min = *p;
            }
        }

    cout << "Smallest element is: ";
    cout << min;
        
    }