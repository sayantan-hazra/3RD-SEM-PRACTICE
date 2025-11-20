#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr;
    printf("Enter Array Size:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    n+=5;
    ptr=realloc(ptr,n*sizeof(int));

    printf("ENTER VALUES:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("GIVEN VALUES:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
free(ptr);
    return 0;
}