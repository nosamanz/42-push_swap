CC = gcc
NAME = push_swap
SRCS =	arg.c radi_go.c check_list.c error.c find_index.c ft_list.c is_number.c push_swap.c sa_pa_ra_rra.c sb_pb_rb_rrb.c sort.c utils.c
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

${NAME}: ${OBJS}
		@${CC} -o ${NAME} ${OBJS}
		@echo "\033[1;36m - [OK] -"

clean:
	@echo "\033[1;35m[🧹Cleaning...🧹]"
	@rm -rf $(OBJS)

fclean: clean
	@echo "\033[1;35m[🧹FCleaning...🧹]"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
