#include"deposit.h"

int main()
{
	int sum, srok, itog, month;
	printf("%s", "Enter your deposit\n");
	scanf("%d", &sum);
	printf("%s", "Enter your of term of the deposit\n");
	scanf("%d", &srok);
	month = srok / 30;

	if (sum > 1000 && srok <= 365 && srok > 0) 
	{
		if (sum <= 100000) 
		{
			if (srok <= 30)
				itog = sum * month / 100 * 90;
			if (srok <= 120 && srok >= 31)
				itog = sum * month / 100 * 102;
			if (srok <= 240 && srok >= 121)
				itog = sum * month / 100 * 106;
			if (srok <= 365 && srok >= 241)
				itog = sum * month / 100 * 112;
		}
		else 
		{
			if (srok <= 30)
				itog = sum * month / 100 * 90;
			if (srok <= 120 && srok >= 31)
				itog = sum * month / 100 * 103;
			if (srok <= 240 && srok >= 121)
				itog = sum * month / 100 * 108;
			if (srok <= 365 && srok >= 241)
				itog = sum * month / 100 * 115;
		}

		printf("%s", "Amount of deposit=");
		printf("%d\n", itog);
		Profit(sum, itog);
	}
	else
	{
		printf("%s\n", "Uncorrect value of term or deposit");
	}

	return 0;
}