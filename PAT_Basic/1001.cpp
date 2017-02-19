
int _1001(int n) 
{
	int count = 0;

	if ( n == 1)					
	{
		return 0;					
	}

	while (true)
	{
		if (n % 2 == 0)	
		{
			n = n / 2;
			count++;
		}
		else 
		{
			n = (3 * n + 1) / 2;
			count++;
		}

		if (n == 1)
		{
			break;
		}
	}

	return count;
}















