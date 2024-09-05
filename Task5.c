#include <stdio.h>
int main()
{ 
  int P,R,T,SimpleInterest;
  printf("Enter principle between Rs100 to Rs1,000,000 ");
  scanf("%d",&P);
  printf("Enter Rate of Interest between 5%% to 10%% ");
  scanf("%d",&R);
  printf("Enter Time Period between 1 to 10 years ");
  scanf("%d",&T);
  SimpleInterest=(P*R*T)/100;
  printf("Simple Interest=%d \n",SimpleInterest);
  return 0;
}




