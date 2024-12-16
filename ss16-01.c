#include <stdio.h>

int main() {
    int x = 31;       
    int *ptr = &x;    
    
    //cach1
	printf("Gia tri cua x: %d\n", *ptr);   
    printf("Dia chi cua x: %d\n", &ptr);  
    
    //cach2
    printf("Gia tri cua x: %d\n", x);    
    printf("Dia chi cua x: %d\n", &x); 
	 
    return 0;
}

