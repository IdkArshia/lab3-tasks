#include <stdio.h>
int main()
{ 
  int N1,N2,Temp;
  printf("Enter First number ");
  scanf("%d",&N1);
  printf("Enter second number ");
  scanf("%d",&N2);
  Temp=N1;
  N1=N2;
  N2=Temp;
  printf("First Number is %d \n",N1);
  printf("Second number is %d",N2);
return 0;
}




