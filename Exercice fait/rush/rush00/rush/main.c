#include <unistd.h>

int 	main()
{
	int 	y;
	int 	x;
	int		zero;
	int 	minus;
	int		counter;

	y = '6';
	x = '5';
	zero = 'o';
	minus = '-';
	counter = '2';

	if (y == 1)
	{
		write (1, &zero, 1);
		while (x < counter)
		{
			write (1, &minus, 1);
			counter++;
		}
		if(x >= counter)
		{
			write(1, &zero, 1);	
		}
		write (1, "\n", 1);
		return(0);
	}
	//return(0);
}	
