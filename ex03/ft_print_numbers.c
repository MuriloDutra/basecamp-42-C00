#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digit_counter;
	char	c;

	digit_counter = 0;
	while (digit_counter <= 9)
	{
		c = digit_counter + '0';
		write(1, &c, 1);
		digit_counter++;
	}
}
