#include<stdio.h>

int main(){
    int c, *pc;
    c=5;
    pc = c; // error because pc le address store garnu parne ma interger assign gareko xa
    *pc = &c;// error because *pc le integer point garxa tyo address ma bhako tara yenha address deko xa
    pc = &c; // not error because pc le address store garnu parne ma interger assign gareko xa
    *pc = c; //  not error because *pc le integer point garxa tyo address ma bhako variable dekhako xa
    

    printf("\nThe address of a is %p", pc);




}