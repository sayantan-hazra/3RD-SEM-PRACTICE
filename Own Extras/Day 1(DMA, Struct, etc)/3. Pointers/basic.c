#include<stdio.h>
int main(){
    int a=71;
    int *ptr1=&a;

    char b='V';
    char *ptr2=&b;

    float c=71.77;
    float *ptr3=&c;

    printf("Stored Value is: %d\n",a);
    printf("Pointer Value: %d\n",ptr1);
    printf("Dedeferenced Pointer: %d\n",*ptr1);

    printf("Stored Value is: %c\n",b);
    printf("Pointer Value: %d\n",ptr2);
    printf("Dedeferenced Pointer: %c\n",*ptr2);

    printf("Stored Value is: %f\n",c);
    printf("Pointer Value: %d\n",ptr3);
    printf("Dedeferenced Pointer: %f\n",*ptr3);
    return 0;
}