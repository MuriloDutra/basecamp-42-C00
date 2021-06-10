#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter_counter;

	letter_counter = 122;
	while (letter_counter >= 97)
	{
		write(1, &letter_counter, 1);
		letter_counter--;
	}
}
