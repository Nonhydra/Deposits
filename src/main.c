#include"deposit.h"

int main()
{
	int sum, srok;
	printf("%s", "Enter your deposit\n");
	scanf("%d", &sum);
	printf("%s", "Enter your of term of the deposit\n");
	scanf("%d", &srok);
	

	if (Check(sum, srok))
	{
		Profit(sum, srok);
	}
	else
	{
		printf("%s\n", "Uncorrect value of term or deposit");
	}

	return 0;
}