#include<stdio.h>
typedef struct employee
{
    int  id;
    char name[60];
    float salary;
}emp; //Typedef name Declaration
int main(){
    emp e1,e2; //struct employee -> emp
    e1.id=24;
    strcpy(e1.name,"Sayantan");
    e1.salary=5500.50;

    e2.id=204;
    strcpy(e2.name,"Bablu");
    e2.salary=7840.50;

    printf("ID: %d\n",e1.id);
    printf("NAME: %s\n",e1.name);
    printf("SALARY: %f\n\n",e1.salary);

    printf("ID: %d\n",e2.id);
    printf("NAME: %s\n",e2.name);
    printf("SALARY: %f\n\n",e2.salary);
    return 0;
}