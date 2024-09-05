#include <stdio.h>
int main()
{ 
  int FuelAvg,FuelConsumed,TotalCost;
  int dist=1207;
  int goingcost=118;
  int returncost=123;
  printf("Enter Fuel Average ");
  scanf("%d",&FuelAvg);
  if(FuelAvg<=0)
   {printf("Invalid Input");
   }
  else
   {
    FuelConsumed=FuelAvg*dist*2;
    TotalCost=(FuelAvg*dist)*(goingcost+returncost);
    printf("%d litres of fuel was consumed\n",FuelConsumed);
    printf("Total Cost is Rs%d\n",TotalCost);
   }  
  return 0;
}




