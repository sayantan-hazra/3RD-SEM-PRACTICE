#include<stdio.h>
int sum
(int a, int b){
    return a + b;
}
int sub
(int a, int b){ 
    return a - b;
}
int mul
(int a, int b){
    return a * b;
}
int div
(int a, int b){
    return a / b;
}
int main(){
    int a,b;
    char ch;

    printf("Enter two values:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("Case 'A': Sum\n");
    printf("Case 'B': Sub\n");
    printf("Case 'C': mul\n");
    printf("Case 'D': div\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        {
        sum(a,b);
        break;
        }
        case 'b':
        case 'B':
        {
        sub(a,b);
        break;
        }
        case 'c':
        case 'C':
        {
        mul(a,b);
        break;
        }
        case 'd':
        case 'D':
        {
        div(a,b);
        break;
        }

    }
    return 0;
}