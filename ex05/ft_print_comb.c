#include <unistd.h>

void	handle_ten(int hundred_counter);
void	handle_unity(int hundred_counter, int ten_counter);
void	print(int hundred_counter, int ten_counter, int uni_counter);

void	ft_print_comb(void)
{
	int	hundred_counter;

	hundred_counter = 0;
	while (hundred_counter <= 9)
	{
		handle_ten(hundred_counter);
		hundred_counter++;
	}
}

void	handle_ten(int hundred_counter)
{
	int	ten_counter;

	ten_counter = hundred_counter + 1;
	while (ten_counter <= 9)
	{
		if (hundred_counter != ten_counter)
		{
			handle_unity(hundred_counter, ten_counter);
		}
		ten_counter++;
	}
}

void	handle_unity(int hundred_counter, int ten_counter)
{
	int	uni_counter;

	if (hundred_counter <= 7 && ten_counter <= 8)
	{
		uni_counter = ten_counter + 1;
		while (uni_counter <= 9)
		{
			if (uni_counter != hundred_counter && uni_counter != ten_counter)
			{
				print(hundred_counter, ten_counter, uni_counter);
			}
			uni_counter++;
		}
	}
}

void	print(int hundred_counter, int ten_counter, int uni_counter)
{
	char	hundred;
	char	ten;
	char	uni;

	hundred = hundred_counter + '0';
	ten = ten_counter + '0';
	uni = uni_counter + '0';
	if (uni_counter != hundred_counter && uni_counter != ten_counter)
	{
		write(1, &hundred, 1);
		write(1, &ten, 1);
		write(1, &uni, 1);
		if (hundred_counter != 7 || ten_counter != 8 || uni_counter != 9)
		{
			write(1, ", ", 2);
		}
	}
}
