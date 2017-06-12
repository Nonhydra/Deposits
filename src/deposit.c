#include"deposit.h"

float Profit(int sum, int srok)
{
	float month = srok / 30;
	float itog = 0;
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
	printf("%f\n", itog);
	float profit = 0;
	profit = itog - sum;
	printf("%s", "Your profit=");
	printf("%f\n", profit);

	return profit;
}

bool Check(int sum, int srok)
{
	if (sum > 1000 && srok <= 365 && srok > 0)
	{
		return true;
	}

	return false;
}