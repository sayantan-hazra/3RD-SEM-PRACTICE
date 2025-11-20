#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50]="Sayantan";
    //String Copy
    strcpy(str1,str2);
    printf("Value in 1st String: %s\n",str1);

    //String Length
    int len=strlen(str1);
    printf("Length of 1st String: %d\n",len);

    //String Concat
    char s1[]="Hello ";
    char s2[]="Sayantan";
    strcat(s1,s2);
    printf("S1= %s\n",s1);
    return 0;
}