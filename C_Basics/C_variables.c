#include <stdio.h>
#include <stdlib.h>

//Compiled this code and after a few tries, before i decided to just copy it
//And now it works! credit: Effective C: An Introduction to Professional C Programming by Robert C. Seacord


void swap(int *pa, int *pb) { 
int t = *pa;
*pa = *pb; 
*pb = t; 
}
int main() {
int a = 21; 
int b = 17;
swap(&a, &b);
printf("a = %d, b = %d\n", a, b);
return EXIT_SUCCESS;
}