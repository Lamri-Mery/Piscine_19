#include <unistd.h>

int 	main()
{
	int 	y;
	int 	x;
	int		zero;
	int		pipe;
	int 	minus;
	int 	space;
	int		counterx;
	int		countery;

	y = '6';
	x = '8';
	zero = 'o';
	pipe = '|';
	minus = '-';
	space = ' ';
	countery = '2';

	{
		write (1, &zero, 1);
		counterx = '2';
		while (x > counterx)
		{
			write (1, &minus, 1);
			counterx++;
		}
			if(x >= counterx)
		{
			write(1, &zero, 1);
		}
		write (1, "\n", 1);
	}
	while (y > countery)
	{
		write (1, &pipe, 1);
		counterx = '2';
		while (x > counterx)
		{
			write (1, &space, 1);
			counterx++;
		}
		if(x >= counterx)
		{
			write(1, &pipe, 1);	
		}
		write (1, "\n", 1);
	countery++;
	}
	if(y >= countery)
	{
		write (1, &zero, 1);
		counterx = '2';
		while (x > counterx)
		{
			write (1, &minus, 1);
			counterx++;
		}
			if(x >= counterx)
		{
			write(1, &zero, 1);
		}
		write (1, "\n", 1);
	}
	return(0);
}
