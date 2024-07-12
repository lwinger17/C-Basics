#include <iostream>

//this example will sort the array from least to greatest

void sort(int array[], int size);

int main(){

    int array[] = {23, 56, 8, 92, 4, 5, 64};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}


void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        // -1 because we dont need to compare the last element
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                // change > to < to create descending order
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
}