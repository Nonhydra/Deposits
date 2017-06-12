#include <deposit.h>
#include <ctest.h>

CTEST(deposit_test, day_30_sum_min_100000)
{
	int time = 25;
	int sum = 50000;
	float month = time / 30;

	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 90) - sum);
}

CTEST(deposit_test, day_30_sum_max_100000)
{
	int time = 25;
	int sum = 500000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 90) - sum);
}

CTEST(deposit_test, day_30_120_min_100000)
{
	int time = 55;
	int sum = 50000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 102) - sum);
}

CTEST(deposit_test, day_30_120_max_100000)
{
	int time = 55;
	int sum = 500000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 103) - sum);
}

CTEST(deposit_test, day_121_240_min_100000)
{
	int time = 155;
	int sum = 50000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 106) - sum);
}

CTEST(deposit_test, day_121_240_max_100000)
{
	int time = 155;
	int sum = 500000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 108) - sum);
}

CTEST(deposit_test, day_241_365_min_100000)
{
	int time = 255;
	int sum = 50000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 112) - sum);
}
CTEST(deposit_test, day_241_365_100000)
{
	int time = 255;
	int sum = 500000;
	float month = time / 30;
	float result = Profit(sum, time);
	ASSERT_DBL_NEAR(result, (sum * month / 100 * 115) - sum);
}