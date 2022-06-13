#include "ps_header.h"
//Gaffe au leaks xD
int	main(int ac, char **av)
{
	//Checker les different input (une chaine de charactere de pleins d'element) + puis des element seul aussi etc
	//Pas de doublons
	//Must be number not greater than greater than maxint or lower of lowint
	//Not error with no parameter
	t_clist **stack_a;
	t_clist **stack_b;

	if (ac == 1)
		return (0);
	if (!sl_parsing(ac, av, stack_a, stack_b))
	{
		// WRITE ON STDERR NOT OUT ft_printf("Error\n");
		return (0);
	}
}
