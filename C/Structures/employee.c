#include <stdio.h>
struct employee
{
    char id[100];
    char name[100];
    float sal;

};

int main(){
    struct employee e1,e2,e3;
    float s;

    printf("Name of employee:");
    scanf("%s",e1.name);
    printf("ID:");
    scanf("%s",e1.id);
    printf("Salary:");
    scanf("%f",&e1.sal);

    printf("Name of employee:");
    scanf("%s",e2.name);
    printf("ID:");
    scanf("%s",e2.id);
    printf("Salary:");
    scanf("%f",&e2.sal);

    printf("Name of employee:");
    scanf("%s",e3.name);
    printf("ID:");
    scanf("%s",e3.id);
    printf("Salary:");
    scanf("%f",&e3.sal);

    if(e1.sal>e2.sal&&e1.sal>e3.sal){
        s=e1.sal;
    }else if(e2.sal>e3.sal){
        s=e2.sal;
    }else{s=e3.sal;}

    printf("DETAILS:\n\n");
    printf("NAME:%s\n",e1.name);
    printf("ID:%s\n",e1.id);
    printf("SALARY:%.2f\n\n",e1.sal);

    printf("NAME:%s\n",e2.name);
    printf("ID:%s\n",e2.id);
    printf("SALARY:%.2f\n\n",e2.sal);


    printf("NAME:%s\n",e3.name);
    printf("ID:%s\n",e3.id);
    printf("SALARY:%.2f",e3.sal);

    printf("\n\nHIGHEST SALARY:%.2f",s);

    return 0;
}