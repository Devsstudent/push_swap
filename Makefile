FLAG = -Werror -Wextra -Wall -g -MMD -O3
OBJ = $(addprefix obj/, ps_parsing.o ps_push.o ps_reverse.o ps_rotate.o ps_swap.o ps_utils.o main.o)
D_LIST = $(addprefix obj/, ps_parsing.d ps_push.d ps_reverse.d ps_rotate.d ps_swap.d ps_utils.d main.d)
NAME = push_swap
LIB = lib/libft
all : $(NAME)

$(NAME): $(OBJ)
	@make -s -C $(LIB)
	$(CC) $(FLAG) $(OBJ) -L $(LIB) -lft -o $(NAME)

obj/%.o: src/%.c | object
	$(CC) $(FLAG) -I $(LIB) -I ./includes -c $< -o $@

object :
	@mkdir -p obj

fclean :
	rm -f $(OBJ)
	rm -f $(D_LIST)
	rm -rf obj
	@make fclean -s -C $(LIB)

clean :
	rm -f $(NAME)
	@make clean -s -C $(LIB)

re : fclean all

.PHONY: re all clean fclean
-include $(D_LIST)
