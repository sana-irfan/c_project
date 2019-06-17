#include<stdio.h>

int main()
{
     int basic_salary, DA, HRA, gross_salary;
     printf("Enter your basic salary" );
     scanf("%d", &basic_salary);
     DA = basic_salary * 0.4;
     HRA = basic_salary * 0.2;
     gross_salary = DA + HRA + basic_salary;
     printf("Your gross salary is %d", gross_salary );
     return 0;

}