NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -I$(LIBFT_DIRECTORY) -I.

RM = rm -f

LIBFT_DIRECTORY = ./libft

LIBFT = $(LIBFT_DIRECTORY)/libft.a

SRCS = \
	main.c \
	push_swap.c \
	move_swap.c \
	move_push.c \
	move_rotate.c \
	move_rrotate.c \
	algorithm_simple.c \
	algorithm_medium.c \
	algorithm_complex.c \
	algorithm_adaptive.c \
	algorithm_small.c \
	parsing_init.c \
	parsing_argv.c \
	parsing_flags.c \
	parsing_utils.c \
	bench.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "push_swap compiled successfully"

$(LIBFT):
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY)
	@echo "Compiled libft successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY) clean
	@echo "Cleaned push_swap & libft successfully"

fclean:
	@$(RM) $(OBJS) $(NAME)
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY) fclean
	@echo "Cleaned push_swap, libft & static libraries successfully"

re: fclean all

.PHONY: all clean fclean re

