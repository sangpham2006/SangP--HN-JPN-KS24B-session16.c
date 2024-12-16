#include <stdio.h>

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
  
    int arr[] ={20,31,5,66,10};
    int n = sizeof(arr) / sizeof(arr[0]);  
    inMang(arr, n);

    return 0;
}
