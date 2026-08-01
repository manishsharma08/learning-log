    #include <iostream>
    using namespace std;


    int main(){
        int n = 3;
        double matrix[n][n] = 
        {{1,2,3},
        {2,1,4},
        {3,4,1}};

        bool sym = true;

        for(int i=0;i<n;i++){ // i -> columns
            for(int j=i+1;j<n;j++){
                if(matrix[i][j]!=matrix[j][i]){
                    //cout << "Not a Symmetric Matrix";
                    sym = false;
                    break;
                    
                }
                
            }
            
            
        
        }
        if(sym == false){
            cout << "It is not symmetric matrix";
            
        }else{
            cout << "Symmetric";
            
        }
    
    }