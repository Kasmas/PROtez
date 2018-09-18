#include <ctest.h>
#include <../src/Calc.h>

CTEST(addition_positive_and_negative_check, addition)
{
	int result = addition(-5, 5);

	int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(subtraction_positive_and_negative_check, subtraction)
{
	int result = subtraction(-5, 5);

	int expected = -10;
	ASSERT_EQUAL(expected, result);
}


CTEST(multiplication_positive_and_negative_check, mltiplication)
{
	int result = multiplication(-5, 5);

	int expected = -25;
	ASSERT_EQUAL(expected, result);
}


CTEST(divide_positive_and_negative_check, divide)
{
	int result = divide(-5, 5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}




CTEST(exponentation_negative_by_positive_check, exponentation)
{
	int result = exponentation(-1, 3);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

