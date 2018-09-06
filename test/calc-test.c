#include <ctest.h>
#include <../src/Calc.h>

CTEST(additiontwo_positivecheck, addition)
{
    int result = addition(5, 5);
    
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(additionpositive_andnegativecheck, addition)
{
	int result = addition(-5, 5);

	int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(subtractiontwo_positivecheck, subtraction)
{
	int result = subtraction(5, 5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(subtractionpositiveand_negativecheck, subtraction)
{
	int result = subtraction(-5, 5);

	int expected = -10;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplicationtwo_positivecheck, multiplication)
{
	int result = multiplication(5, 5);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplicationpositiveand_negativecheck, multiplication)
{
	int result = multiplication(-5, 5);

	int expected = -25;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividetwo_positivecheck, divide)
{
	int result = divide(5, 5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividepositiveand_negativecheck, divide)
{
	int result = divide(-5, 5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividezero_check, divide)
{
	int result = divide(5, 0);

	int expected = 5;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwo_positivecheck, exponentation)
{
	int result = exponentation(2, 5);

	int expected = 32;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationpositiveby_negativecheck, exponentation)
{
	int result = exponentation(5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationpositiveby_negativecheck, exponentation)
{
	int result = exponentation(1, -5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationnegativeby_positivecheck, Exponentation)
{
	int result = exponentation(-5, 2);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationnegativeby_positivecheck, exponentation)
{
	int result = exponentation(-1, 3);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwo_negativecheck, exponentation)
{
	int result = exponentation(-5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwo_negativecheck, exponentation)
{
	int result = exponentation(-1, -5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationby_zerocheck, exponentation)
{
	int result = exponentation(5, 0);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}
