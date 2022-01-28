#include <iostream>
using namespace std;

void aniadir_vector(int array[], int tamanio){
  for (int i = 0 ; i < tamanio ; i++){
    array[i] = i;
  }
}

void sumar_4_en_4(int num[], int tamanio, int sumaNum[]){
    for(int i = 0; i < tamanio; i+=4){
        sumaNum[i/4] = i + i+1 + i+2 + i+3;
    }
}

void imprimirArray(int array[], int tama){
    for (int i = 0 ; i < tama ; i++){
        if(i % 5 == 0){
            cout << endl;
        }
        cout << array[i] << "\t";
    }
}

int main(){
    int tamanio = 100, nums[tamanio], sumaNum[tamanio/4];

    aniadir_vector(nums, tamanio);
    sumar_4_en_4(nums, tamanio, sumaNum);
    cout << endl << "Sumatorio de los 100 primeros números." << endl;
    imprimirArray(sumaNum, tamanio/4);
    cout << endl;

    return 0;
}