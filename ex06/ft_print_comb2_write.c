#include <unistd.h>

void	ft_print_comb2(void);
void	handle_second_combination(int comb_1[2]);
void	print_number(int comb_1[2], int comb_2[2]);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int	comb_1[2];

	comb_1[0] = 0;
	comb_1[1] = 0;
	while (comb_1[0] <= 9 && comb_1[1] <= 9)
	{
		handle_second_combination(comb_1);
		if (comb_1[1] == 9)
		{
			comb_1[0]++;
			comb_1[1] = 0;
		}
		else
		{
			comb_1[1]++;
		}
	}
}

void	handle_second_combination(int comb_1[2])
{
	int	comb_2[2];

	comb_2[0] = comb_1[0];
	comb_2[1] = comb_1[1];
	while (comb_2[0] <= 9 && comb_2[1] <= 9)
	{
		if ((comb_1[0] != comb_2[0]) || (comb_1[1] != comb_2[1]))
		{
			print_number(comb_1, comb_2);
		}
		if (comb_2[1] == 9)
		{
			comb_2[0]++;
			comb_2[1] = 0;
		}
		else
		{
			comb_2[1]++;
		}
	}
}

void	print_number(int comb1[2], int comb2[2])
{
	char	value01;
	char	value02;
	char	value03;
	char	value04;

	value01 = comb1[0] + '0';
	value02 = comb1[1] + '0';
	value03 = comb2[0] + '0';
	value04 = comb2[1] + '0';
	write(1, &value01, 1);
	write(1, &value02, 1);
	write(1, " ", 1);
	write(1, &value03, 1);
	write(1, &value04, 1);
	if ((comb1[0] != 9 || comb1[1] != 8) && (comb1[0] != 9 || comb1[1] != 9))
	{
		write(1, ", ", 2);
	}
}
