NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

SRCS = main.c \
	parsing.c \
	errors.c \
	init_stack.c \
	stack_utils.c \
	stack_utils2.c \
	free.c \
	sa_sb_ss.c \
	pa_pb.c \
	ra_rb_rr.c \
	rra_rrb_rrr.c \
	small_sort.c \
	radix_sort.c \
	utils.c

OBJS = $(SRCS:.c=.o)

HEADER = push_swap.h

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re