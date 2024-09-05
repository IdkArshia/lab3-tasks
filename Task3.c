#include <stdio.h>
int main()
{ 
  int TaxRate,Salary,Tax;
  printf("Enter Tax Rate percentage ");
  scanf("%d",&TaxRate);
  printf("Enter Salary ");
  scanf("%d",&Salary);
  Tax=(TaxRate*Salary)/100 ;
  Salary=Salary-Tax;
  printf(" you have to pay Rs%d Tax\n",Tax);
  printf("Your remaining salary is Rs%d",Salary);
return 0;
}




