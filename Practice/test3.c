#include <stdio.h>
#include <stdlib.h>

struct employee
{
  char name[40];
  char sex;
  double salary;
};
int main()
{
  struct employee emp;
  float sal;
  printf("Enter Emplyee name: ");
  scanf("%s", &emp.name);
  printf("Enter Sex: ");
  scanf("%d", &emp.sex);

  if (emp.sex == 'M' || emp.sex == 'm')
  {
    printf("Enter Salary: ");
    scanf("%lf", &emp.salary);
    if(emp.salary >10000){
        sal=emp.salary*0.05;
        printf("The total salary : %lf", sal);
    }
  }
  else{
    printf("Enter Salary: ");
   scanf("%lf",&emp.salary);
   if(emp.salary >10000){
        sal=emp.salary*0.1;
        printf("The total salary : %lf", sal);}
  return 0;
}