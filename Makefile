NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
LIBFT		=	libft/libft.a
SRC			=	main.c ft_error.c ft_add_stack.c ft_sort_stack.c
DIR_SRC		=	$(addprefix src/, $(SRC))
LST			=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
DIR_LST		=	$(addprefix lst/, $(LST))
UTILS		=	ft_check_args.c ft_free.c ft_add_index.c ft_is_sort.c ft_putstr.c swap.c rotate.c reverse.c push.c ft_case_three.c ft_case_five.c ft_case_four.c ft_atoi_ps.c
DIR_UTILS	=	$(addprefix utils/, $(UTILS))
OBJS		=	$(DIR_SRC:.c=.o) $(DIR_UTILS:.c=.o) $(DIR_LST:.c=.o)
INCLUDE		=	include/push_swap.h

all:	$(NAME)

$(NAME):	$(OBJS) $(INCLUDE) $(LIBFT)
	@printf "Compilando\n"
	@$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)

$(LIBFT):
	@make -C libft
sanitize:
	@$(CC) -fsanitize=address $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)
clean:
	@printf "Borrando objetos\n"
	@$(RM) libft/*.o
	@$(RM) $(OBJS)

fclean: clean
	@printf "Borrando libft.a y push_swap\n"
	@$(RM) libft/libft.a
	@$(RM) $(NAME)

re: fclean all
	@printf "Recompilando\n"

.PHONNY: re fclean clean