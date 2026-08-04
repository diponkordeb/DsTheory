#include <iostream>
using namespace std;

void bubble_sort(int array[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printarr(int array[], int size){
    for(int i=0; i<size; i++) cout << array[i] << " ";
    cout << endl;
}

int main() {
    int array[100] = {9,8,7,6,1,2,3,4,5};
    int size = 9;
    printarr(array, size);
    bubble_sort(array, size);
    printarr(array, size);
    return 0;
}