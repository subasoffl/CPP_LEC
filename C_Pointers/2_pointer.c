#include<stdio.h>

int main(){
    int *p, a;
    a = 10;
    p = &a;

    printf("The value of a is %d", a);
    printf("\nThe address of a is %d", *p);

}