#include <ctest.h>
#include <../src/Calc.h>

CTEST(addition_two_positive_check, Addition1)
{
    int result = addition(5, 5);
    
    int expected = 10;
    ASSERT_EQUAL(expected, result);
}

CTEST(addition_positive_and_negative_check, Addition2)
{
	int result = addition(-5, 5);

	int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(subtraction_two_positive_check, Subtraction3)
{
	int result = subtraction(5, 5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(subtraction_positive_and_negative_check, Subtraction4)
{
	int result = subtraction(-5, 5);

	int expected = -10;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplication_two_positive_check, Multiplication5)
{
	int result = multiplication(5, 5);

	int expected = 25;
	ASSERT_EQUAL(expected, result);
}

CTEST(multiplication_positive_and_negative_check, Multiplication6)
{
	int result = multiplication(-5, 5);

	int expected = -25;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_two_positive_check, Divide7)
{
	int result = divide(5, 5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_positive_and_negative_check, Divide8)
{
	int result = divide(-5, 5);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(divide_zero_check, Divide9)
{
	int result = divide(5, 0);

	int expected = 5;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_two_positivecheck, Exponentation10)
{
	int result = exponentation(2, 5);

	int expected = 32;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_positive_by_negative_check, Exponentation11)
{
	int result = exponentation(1, -5);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_negative_by_positive_check, Exponentation12)
{
	int result = exponentation(-1, 3);

	int expected = -1;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_two_negative_check, Exponentation13)
{
	int result = exponentation(-5, -5);

	int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(exponentation_by_zero_check, Exponentation14)
{
	int result = exponentation(5, 0);

	int expected = 1;
	ASSERT_EQUAL(expected, result);
}
