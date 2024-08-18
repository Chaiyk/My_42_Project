SRCS =	printf.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_unsigned.c\
		ft_hexanbr.c\
		ft_pointer.c
OBJS = $(SRCS:.c=.o)

SRC_DIR = ./source
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I./includes
AR = ar -rc
RM = rm -fr

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Done Compile"

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< 

clean:
	@$(RM) $(OBJS) $(MAIN_OBJ)
	@echo 'Removed Object Files'

fclean: clean
	@$(RM) $(NAME)
	@echo "Removed Library File"

re: fclean all

.PHONY: all clean fclean re
