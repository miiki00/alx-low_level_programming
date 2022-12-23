/* global variable that count calles made to rand */
static int call = 1;

/**
 * rand - return the the corresponding value that makes this
 * lottery number(9 8 10 24 75 9) a winner every time it's called.
 * Description: The lottery number generator it shifts the 6 value 1 step
 * backward returned by rand and adds 1 to them and out lottery number which
 * we want to get a jackpot with is (9 8 10 24 75 9) so when we substract
 * 1 from each number and shift them 1 step we get the value which should
 * be returned by the rand function to make this lottery number a jackpot
 * winner.
 *
 * Return: 8 (call 1), 8 (call 2), 7 (call 3), 9 (call 4), 23 (call 5)
 * and last call 74 (call 6). if more calles happens with out reloading
 * the library it will reset call to 0.
 */
int rand(void)
{
	if (call == 1)
	{
		call++;
		return (8);
	}
	if (call == 2)
	{
		call++;
		return (8);
	}
	if (call == 3)
	{
		call++;
		return (7);
	}
	if (call == 4)
	{
		call++;
		return (9);
	}
	if (call == 5)
	{
		call++;
		return (23);
	}
	if (call == 6)
	{
		call++;
		return (74);
	}
	call = 1;
	return (9);
}
