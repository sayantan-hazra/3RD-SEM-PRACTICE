#include<stdio.h>
struct employee
{
    int  id;
    char name[60];
    float salary;
};
int main(){
    struct employee e1,e2;
    //Structure Pointer Declaration
    struct employee *ptr=&e1;
    e1.id=24;
    strcpy(e1.name,"Sayantan");
    e1.salary=5500.50;

    e2.id=204;
    strcpy(e2.name,"Bablu");
    e2.salary=7840.50;

    printf("ID: %d\n",e1.id);
    printf("NAME: %s\n",e1.name);
    printf("SALARY: %f\n\n",e1.salary);

    //Pointer Value Access
    printf("ID: %d\n",(*ptr).id); //Both are same
    printf("NAME: %s\n",ptr->name);
    printf("SALARY: %f\n\n",ptr->salary);

    printf("ID: %d\n",e2.id);
    printf("NAME: %s\n",e2.name);
    printf("SALARY: %f\n\n",e2.salary);
    return 0;
}