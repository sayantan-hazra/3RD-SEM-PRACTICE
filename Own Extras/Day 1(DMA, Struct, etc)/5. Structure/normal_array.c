#include<stdio.h>
struct employee
{
    int  id;
    char name[60];
    float salary;
};
int main(){
    struct employee Meta[5];
    printf("ENTER THE FOLLOWING DETAILS:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ENTER ID:");
        scanf("%d",&Meta[i].id);
        printf("ENTER NAME:");
        scanf(" %[^\n]s", Meta[i].name);
        printf("ENTETR SALARY:");
        scanf("%f",&Meta[i].salary);
        printf("\n");
    }
    
    printf("META COMPANY EMPLOYEE DETAILS:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ID: %d\t",Meta[i].id);
        printf("NAME: %s\t",Meta[i].name);
        printf("SALARY: %f\n\n",Meta[i].salary);
    }
    return 0;
}