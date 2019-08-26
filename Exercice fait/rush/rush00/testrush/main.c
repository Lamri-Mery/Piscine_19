#include <unistd.h>

int 	main()
{
	int 	y;
	int 	x;
	int		zero;
	int 	minus;
	int		counter;
	int		c;

	y = '6';
	x = '8';
	zero = 'o';
	minus = '-';
	c = '2';

	while (y > c)
	{
		write (1, &zero, 1);
		counter = '2';
		while (x > counter)
		{
			write (1, &minus, 1);
			counter++;
		}
		if(x >= counter)
		{
			write(1, &zero, 1);	
		}
		write (1, "\n", 1);
	c++;
	}
	return(0);
}

