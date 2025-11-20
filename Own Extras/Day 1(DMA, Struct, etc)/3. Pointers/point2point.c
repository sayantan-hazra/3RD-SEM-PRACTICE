#include<stdio.h>
int main(){
    int a=10;
    int *i=&a;
    int **j=i;
    int ***k=j;
    int ****l=k;

    printf("Value in A: %d\n",a);
    printf("Value in I: %d\n",i);
    printf("Value in J: %d\n",j);
    printf("Value in K: %d\n",k);
    printf("Value in L: %d\n",l);

    printf("L Deferenced: %d\n",*l);
    return 0;
}