#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {3, 5, 6 ,8 , 90, 23, 1, 7, 9, 56, 91};
    int size = sizeof(numbers)/ sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;


    index = searchArray(numbers, size, myNum );

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array";
    }

    return 0;
}

int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
    // -1 = something wasnt found
    // so in this case i = found and -1 = not found
}