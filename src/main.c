#include "ps_header.h"
//Gaffe au leaks xD
int	main(int ac, char **av)
{
	//Checker les different input (une chaine de charactere de pleins d'element) + puis des element seul aussi etc
	//Pas de doublons
	//Must be number not greater than greater than maxint or lower of lowint
	//Not error with no parameter
	t_clist *stack_a;
	t_clist *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	if (!ps_parsing(ac, av, &stack_a))
	{
		ps_clst_clear(&stack_a);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
}
