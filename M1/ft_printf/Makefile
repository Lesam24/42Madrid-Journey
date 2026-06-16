NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -I$(LIBFT_DIRECTORY) -I.

AR = ar rcs

RM = rm -rf

LIBFT_DIRECTORY = ./libft

LIBFT = $(LIBFT_DIRECTORY)/libft.a

SRCS = ft_printf.c ft_print_words.c ft_print_numbers.c ft_misc_functions.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compiled printf successfully"

$(LIBFT):
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY)
	@echo "Compiled libft successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY) clean
	@echo "Cleaned printf & libft successfully"

fclean:
	@$(RM) $(OBJS) $(NAME)
	@$(MAKE) -s --no-print-directory -C $(LIBFT_DIRECTORY) fclean
	@echo "Cleaned printf, libft & static libraries successfully"

re: fclean all

.PHONY: all clean fclean re