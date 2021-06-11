#include <stdio.h>

void ft_print_comb2(void);
void	print_number(int first_number, int second_number);

int	main()
{
	ft_print_comb2();
}

void ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 00;
	second_number = 00;

	while(first_number < 99)
	{
		second_number = first_number + 1;
		while(second_number <= 99)
		{
			if(first_number != second_number)
			{
				print_number(first_number, second_number);
			}
			second_number++;
		}
		first_number++;
	}
}

void	print_number(int first_number, int second_number)
{
	if(first_number == 98 && second_number == 99)
	{
		printf("%d %d", first_number, second_number);
	}
	else
	{
		if(first_number < 10)
		{
			printf("0%d ", first_number);
		}
		else
		{
			printf("%d ", first_number);
		}

		if(second_number < 10)
		{
			printf("0%d, ", second_number);
		}
		else
		{
			printf("%d, ", second_number);
		}
	}
}