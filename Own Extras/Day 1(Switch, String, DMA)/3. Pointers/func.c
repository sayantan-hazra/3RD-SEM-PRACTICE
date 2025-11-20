#include<stdio.h>

//Call By Reference
    int sum(int *x,int *y)
    {
        *x=6;
        return(*x+*y);
    }

int main(){
    int a= 10, b=5;

    printf("Sum: %d\n",sum(&a,&b));
    printf("%d",a);
    return 0;
}