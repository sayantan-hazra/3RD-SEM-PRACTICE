#include<stdio.h>
int main(){
    // char s[]={'S','A','Y','A','N','T','A','N','\0'};
    // char st[]="SAYANTAN";
    // puts(s);
    // puts(st);

    char name2[50];
    printf("Enter Name: ");
    gets(name2);
    puts(name2);

    char name1[50];
    printf("Enter Name: ");
    scanf("%s",name1);
    printf("%s\n\n",name1);

    return 0;
}