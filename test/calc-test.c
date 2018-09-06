#include <ctest.h>
#include <../src/Calc.h>

CTEST(additiontwopositive_check, addition)
{
    int result = addition(5, 5);
    
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(additionpositiveandnegativecheck, addition)
{
	int result = addition(-5, 5);

	int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(subtractiontwopositivecheck, subtraction)
{
	int result = subtraction(5, 5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(subtractionpositiveandnegativecheck, subtraction)
{
	int result = subtraction(-5, 5);

	int expected = -10;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplicationtwopositivecheck, multiplication)
{
	int result = multiplication(5, 5);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplicationpositiveandnegativecheck, multiplication)
{
	int result = multiplication(-5, 5);

	int expected = -25;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividetwopositivecheck, divide)
{
	int result = divide(5, 5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividepositiveandnegativecheck, divide)
{
	int result = divide(-5, 5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(dividezerocheck, divide)
{
	int result = divide(5, 0);

	int expected = 5;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwopositivecheck, exponentation)
{
	int result = exponentation(2, 5);

	int expected = 32;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationpositivebynegativecheck, exponentation)
{
	int result = exponentation(5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationpositivebynegativecheck, exponentation)
{
	int result = exponentation(1, -5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationnegativebypositivecheck, Exponentation)
{
	int result = exponentation(-5, 2);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationnegativebypositivecheck, exponentation)
{
	int result = exponentation(-1, 3);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwonegativecheck, exponentation)
{
	int result = exponentation(-5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationtwonegativecheck, exponentation)
{
	int result = exponentation(-1, -5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentationbyzerocheck, exponentation)
{
	int result = exponentation(5, 0);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}
