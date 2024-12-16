#include <stdio.h>

void updatearr(int *arr, int n, int index, int newnum ) {
    if (index >= 0 && index < n) {  
        *(arr + index) = newnum;   
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

void printarr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {

    int arr[] = {20, 31, 5, 66, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi cap nhat: ");
    printarr(arr, n);
    updatearr(arr, n, 3, 15);
    printf("Mang sau khi cap nhat: ");
    printarr(arr, n);

    return 0;
}

