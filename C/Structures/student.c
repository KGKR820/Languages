#include <stdio.h>
int main(){
struct student
{
    int age;
    char name[90];
    float totalmarks;
};
    struct student s1,s2;
    printf("Enter first student name: ");
    scanf("%s",s1.name);
    printf("age of that student: ");
    scanf("%d",&s1.age);
    printf("enter marks of student: ");
    scanf("%f",&s1.totalmarks);

    printf("\nEnter second student name: ");
    scanf("%s",s2.name);
    printf("Enter age : ");
    scanf("%d",&s2.age);
    printf("marks of the student: ");
    scanf("%f",&s2.totalmarks);

    float avg;
    avg=(s1.totalmarks+s2.totalmarks)/2;

   printf("\ndetails of first student\n");
 
    printf("\nName: %s\n",s1.name);
    printf("Age:%d\n",s1.age);
    printf("Marks :%.1f\n",s1.totalmarks);

    printf("\ndetails of second student\n");

    printf("\nName:%s\n",s2.name);
    printf("Age:%d\n",s2.age);
    printf("Marks:%.1f\n",s2.totalmarks);

    printf("\n\nAverage Marks:%.2f",avg);

    return 0;
}