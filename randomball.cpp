#include <iostream>
#include <ctime>
#include <cstdlib>


int main(){
    
    int maxballs,draw;
    std::cout << "Enter max balls: ";
    std::cin >> maxballs;
    std::cout << "Enter draw limit";
    std::cin >> draw;

    int *store;
    store = new int[draw];
    srand(time(NULL));

   for(int i = 0; i < draw; i++){
    int rnd = rand() % maxballs + 1;
    bool exist = false;

    for(int j = 0; j < i; j++){
        if(store[j] == rnd){
            exist = true;
            i--;
            break;
        }
    }

    if(!exist){
        store[i] = rnd;
    }
}
for(int i = 0; i < draw; i++)
    std::cout << store[i] << " ";
    delete[] store;

}