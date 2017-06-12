#include <deposit.h>
#include <ctest.h>

CTEST(validation_test, yes_yes)
{
	int time = 13;
	int sum = 10032;
	
	int result = Check(sum, time);
	ASSERT_EQUAL(result, 1);
}

CTEST(validation_test, no_no)
{
	int time = 465;
	int sum = 124;
	
	int result = Check(sum, time);
	ASSERT_EQUAL(result, 0);
}

CTEST(validation_test, no_yes)
{
	int time = 465;
	int sum = 12004;
	
	int result = Check(sum, time);
	ASSERT_EQUAL(result, 0);
}

CTEST(validation_test, yes_no)
{
	int time = 15;
	int sum = 124;
	
	int result = Check(sum, time);
	ASSERT_EQUAL(result, 0);
}