#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array
    int i;
    // Print the elements of the array using pointer arithmetic
    for(i = 0; i < 5; i++){
        printf("%d ", *(ptr + i)); // Accessing elements using pointer arithmetic
    }
    
    return 0;
}