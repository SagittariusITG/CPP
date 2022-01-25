#include <iostream>
using namespace std;

void aniadir_vector(int array[], int length){
    int contador = 0;
    cout << endl << "100 valores: " << endl << endl;
    for (int i = 0; i < length; i++){
        array[i] = contador;
        contador++;
        if(i % 5 == 0){
            cout << endl;
        }
        cout << array[i] << "\t";
    }
}

int main(){
    int cantidad = 100, nums[cantidad], length;

    length = *(&nums + 1) - nums;

    aniadir_vector(nums, length);

    return 0;
}