#include<stdio.h>
#include"deposit.h"

void Profit(int sum, int itog)
{
	int profit= 0;
	profit = itog - sum;
	printf("%s", "Your profit=");
	printf("%i\n", profit); 
}

